#include <iostream>
using namespace std;

int alternatingCharacters(string s)
{
    int count = 0;
    for (int i = 0; i < s.size()-1; ++i)  
    {
        if(s[i] == s[i+1])
        {
            ++count;
        }
    }
    return count;
}

int main()
{
    
    return 0;
}
