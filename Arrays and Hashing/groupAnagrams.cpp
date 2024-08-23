class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        unordered_map<string, vector<string>> freqOfSortedString;
        for (auto str : strs)
        {
            string currStr = str;
            sort(currStr.begin(), currStr.end());
            freqOfSortedString[currStr].push_back(str);
        }

        vector<vector<string>> ans;

        for (auto it : freqOfSortedString)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
};
