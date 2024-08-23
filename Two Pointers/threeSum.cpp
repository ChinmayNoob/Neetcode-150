class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> answer;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {

            if (i and nums[i] == nums[i - 1])
                continue;

            int left = i + 1;
            int right = nums.size() - 1;

            while (left < right)
            {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum < 0)
                {
                    left++;
                }
                else if (sum > 0)
                {
                    right--;
                }
                else
                {
                    vector<int> triplets = {nums[i], nums[left], nums[right]};
                    answer.push_back(triplets);
                    left++;
                    right--;

                    while (left < right and nums[left] == nums[left - 1])
                        left++;
                    while (left < right and nums[right] == nums[right + 1])
                        right--;
                }
            }
        }

        return answer;
    }
};
