class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        map<int, int> frequency;
        for (auto num : nums)
        {
            frequency[num]++;
        }
        vector<pair<int, int>> freqNum;
        for (auto freq : frequency)
        {
            freqNum.push_back({freq.second, freq.first});
        }
        sort(freqNum.begin(), freqNum.end());

        vector<int> result;
        for (int i = freqNum.size() - 1; i >= 0 and k != 0; i--, k--)
        {
            result.push_back(freqNum[i].second);
        }
        return result;
    }
};
