#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
using namespace std;

void checkMagazine(vector<string> magazine, vector<string> note) {
    string result = "Yes";
    unordered_map<string, int> map;
    for(auto it : magazine)
    {
        map[it]++;
    }
    for(auto it : note)
    {
        if(map[it] == 0)
        {
            result = "No";
        }
        else
        {
            map[it]--;
        }
    }
    cout << result << endl;
}

int main()
{
    // test 1
    vector<string> mag1 = {"ive", "got", "a", "lovely", "bunch", "of", "coconuts"};
    vector<string> note1 = {"ive", "got", "some", "coconuts"};

    // test 2
    vector<string> mag2 = {"give", "me", "one", "grand", "today", "night"};
    vector<string> note2 = {"give", "one", "grand", "today"};

    // results
    checkMagazine(mag1, note1);
    checkMagazine(mag2, note2);
    return 0;
}
