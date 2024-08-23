class Solution
{
public:
    int trap(vector<int> &height)
    {
        int left = 0;
        int right = height.size() - 1;
        int maxLeft = 0;
        int maxRight = 0;
        int answer = 0;
        while (left <= right)
        {
            if (height[left] <= height[right])
            {
                if (height[left] >= maxLeft)
                    maxLeft = height[left];
                else
                    answer += maxLeft - height[left];

                left++;
            }
            else
            {
                if (height[right] >= maxRight)
                    maxRight = height[right];
                else
                    answer += maxRight - height[right];

                right--;
            }
        }
        return answer;
    }
};
