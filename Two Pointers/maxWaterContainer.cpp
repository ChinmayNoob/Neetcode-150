class Solution
{
public:
    int maxArea(vector<int> &heights)
    {
        int left = 0;
        int right = heights.size() - 1;

        int answer = 0;
        int currMax = 0;

        while (left < right)
        {
            currMax = (right - left) * min(heights[left], heights[right]);
            answer = max(answer, currMax);

            if (heights[left] <= heights[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }

        return answer;
    }
};
