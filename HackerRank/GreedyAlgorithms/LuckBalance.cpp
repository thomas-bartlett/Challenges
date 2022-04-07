#include <vector>
#include <algorithm>

using namespace std;

int luckBalance(int k, vector<vector<int>> contests) {
    sort(contests.begin(), contests.end());
    int total = 0;
    int allowance = k;
    for(int i = contests.size()-1; i >= 0; --i)
    {
        if(contests[i][1] == 0)
        {
            total += contests[i][0];
        }
        else if(allowance > 0)
        {
            total += contests[i][0];
            --allowance;
        }
        else
        {
            total -= contests[i][0];
        }
    }
    return total; 
}