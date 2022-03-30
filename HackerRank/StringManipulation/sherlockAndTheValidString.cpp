#include <iostream>
#include <string>
#include <unordered_set>
#include <map>
using namespace std;


string isValid(string s) {
    // unordered_set<char> set;
    string result;
    map<char,int> myMap;
    for(char x : s)
    {
        myMap[x] += 1;
    }
    
    for(auto it = myMap.begin(); it!=myMap.end(); ++it)
    {
        std::cout << it->first << " => " << it->second << '\n';
    }
    return result;
}

int main()
{
    // string string1 = "aabbcd";
    // string string2 = "aabbccddeefghi";
    // string string3 = "abcdefghhgfedecba";

    // string answer1 = "NO";
    // string answer2 = "NO";
    // string answer3 = "YES";

    // if(isValid(string1) == answer1 && isValid(string2) == answer2 && isValid(string3) == answer3)
    //     cout << "Correct!" << endl;
    // else
    //     cout << "Incorrect." << endl;
    return 0;
}
