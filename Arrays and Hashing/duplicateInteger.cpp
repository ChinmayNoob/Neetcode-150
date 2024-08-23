#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool hasDuplicate(vector<int> &nums)
    {
        map<int, int> frequency;
        for (auto num : nums)
        {
            frequency[num]++;
        }

        for (auto it : frequency)
        {
            if (it.second > 1)
            {
                return true;
            }
        }
        return false;
    }
};
