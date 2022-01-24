#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
using namespace std;

/*
 * Complete the 'sockMerchant' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER_ARRAY ar
 */

int sockMerchant(int n, vector<int> ar) {
    unordered_set<int> set;
    int total = 0;
    for(int x : ar)
    {
        if(set.count(x) > 0)
        {
            ++total;
            set.erase(x);
        }
        else
        {
            set.insert(x);
        }
        
    }
    return total;
}

int main()
{
    vector<int> test1 = {1, 2, 3, 4, 4, 2};
    string result = (sockMerchant(6, test1) == 2) ? "Correct." : "Incorrect.";
    cout << result;
    return 0;
}