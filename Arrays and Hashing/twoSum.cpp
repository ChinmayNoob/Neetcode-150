class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int len = nums.size();
        // brute force approach
        // for(int i=0;i<len;i++){
        //     for(int j=i+1;j<len;j++){
        //         if(nums[i]+nums[j]==target){
        //             return {i,j};
        //         }
        //     }
        // }

        // optimized approach

        unordered_map<int, int> indexNums;
        for (int i = 0; i < len; i++)
        {
            int currentElement = nums[i];
            int remainingElement = target - currentElement;
            if (indexNums.find(remainingElement) != indexNums.end())
            {
                return {indexNums[remainingElement], i};
            }
            indexNums[currentElement] = i;
        }
    }
};
