#include <iostream>
#include <vector>
using namespace std;

vector<int> rotLeft(vector<int> a, int d) {
    vector<int> result = a;
    int position;
    for(int i =0; i < a.size(); i++)
    {
        position = (i+d)%a.size();
        result[i] = a[position];
    }
    return result;
}

int main()
{
    vector<int> input = {1, 2, 3, 4, 5};
    int rotations = 4;
    vector<int> answer = {5, 1, 2, 3, 4};

    if(rotLeft(input,rotations) == answer)
    {
        cout << "Correct!" << endl;
    }
    else
    {
        cout << "Incorrect." << endl;
    }
    return 0;
}
