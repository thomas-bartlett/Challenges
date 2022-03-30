#include <iostream>
using namespace std;

long substrCount(int n, string s) {
    long total = s.size();
    for (int i = 0; i < s.size(); i++)
    {
        char start = s[i];
        int middle = -1;
        for (int j = i + 1; j < s.size(); j++)
        {
            char current = s[j];
            if (start == current)
            {
                if (middle == -1)
                {
                    total++;
                }
                else if((j+i)/2 == middle)
                {
                    total++;
                    break;
                }
            }
            else
            {
                if (middle == -1)
                    middle = j;
                else
                    break;
            }
        }
    }
    return total;
}

int main()
{
    
    return 0;
}