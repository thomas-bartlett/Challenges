#include <iostream>
#include <vector>
using namespace std;

int findPosition(vector<int> vec, int a)
{
    int i = 0;
    while (vec[i] != a)
    {
        i++;
    }
    return i;
}

int minimumSwaps(vector<int> arr)
{
    int count = 0;
    int pos;
    for(int i = 0; i < arr.size(); ++i)
    {
        if(arr[i] != i+1)
        {
            pos = findPosition(arr, i+1);
            swap(arr[i],arr[pos]);
            count++;
        }
    }
    return count;
}

int main()
{
    
    return 0;
}
