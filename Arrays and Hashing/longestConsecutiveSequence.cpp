class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        int len = nums.size();
        if (len == 0)
            return 0;

        sort(nums.begin(), nums.end());

        int longestSequence = 1;
        int currentSequence = 1;

        for (int i = 1; i < len; i++)
        {
            // Skip duplicates
            if (nums[i] == nums[i - 1])
            {
                continue;
            }
            // If the current number is consecutive
            if (nums[i] == nums[i - 1] + 1)
            {
                currentSequence++;
            }
            else
            {
                // Update the longest sequence
                longestSequence = max(longestSequence, currentSequence);
                // Reset current sequence
                currentSequence = 1;
            }
        }
        // Final check to ensure the longest sequence is returned
        longestSequence = max(longestSequence, currentSequence);

        return longestSequence;
    }
};
