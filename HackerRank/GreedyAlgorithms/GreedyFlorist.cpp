#include <vector>
#include <algorithm>

using namespace std;

int getMinimumCost(int k, vector<int> c) {
    std::sort(c.rbegin(), c.rend());
    int multiplier = 1;
    int total = 0;
    for(int i = 0; i < c.size(); ++i)
    {
        if(i%k == 0 && i != 0)
        {
            ++multiplier;
        }
        total += c[i]*multiplier;
    }
    return total;
}
