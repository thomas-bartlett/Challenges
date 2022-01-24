#include <iostream>
#include <string>
using namespace std;

int countingValleys(int steps, string path)
{
    int level = 0;
    int valleys = 0;
    for (int i = 0; i < steps; i++)
    {
        if (path[i] == 'D')
            --level;
        else if (path[i] == 'U')
            ++level;
        if (level == 0 && path[i] == 'U')
            ++valleys;
    }
    return valleys;
}


int main()
{
    int input1 = 8;
    string input2 = "UDDDUDUU";
    int answer = 1;

    if(countingValleys(input1,input2) == answer)
        cout << "Correct!" << endl;
    else
        cout << "Incorrect." << endl;
    return 0;
}
