#include <iostream>
#include <vector>
using namespace std;

vector<int> rotLeft(vector<int> a, int d) {
    for(int i =0; i < d; i++)
    {
        a.push_back(a.front());
        a.erase(a.begin());
    }
    return a;
}

int main()
{
    vector<int> input = {1, 2, 3, 4, 5};
    int rotations = 4;
    vector<int> answer = {5, 1, 2, 3, 4};

    if(rotLeft(input,rotations) == answer)
        cout << "Correct!" << endl;
    else
        cout << "Incorrect." << endl;

    return 0;
}
