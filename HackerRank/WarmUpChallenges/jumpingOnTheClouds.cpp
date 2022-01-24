#include <iostream>
#include <vector>
using namespace std;

int jumpingOnClouds(vector<int> c)
{
    int total = 0;
    for (int i = 0; i < c.size() - 1; ++i)
    {
        if((i + 2 < c.size()) && (c[i+2] == 0))
        {
            i++;
        }
        total++;
    }
    return total;
}

int main()
{
    vector<int> input = {0, 1, 0, 0, 0, 1, 0};
    int answer = 3;

    if(jumpingOnClouds(input) == answer)
        cout << "Correct!" << endl;
    else
        cout << "Incorrect." << endl;

    return 0;
}
