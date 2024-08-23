class Solution
{
public:
    bool checkAlphaDigit(char c)
    {
        return (c >= 'A' and c <= 'Z') || (c >= 'a' and c <= 'z') || (c >= '0' and c <= '9');
    }

    bool isPalindrome(string s)
    {
        int left = 0;
        int right = s.size() - 1;

        while (left < right)
        {
            while (left < right and checkAlphaDigit(s[left]) == false)
            {
                left++;
            }
            while (left < right and checkAlphaDigit(s[right]) == false)
            {
                right--;
            }
            if (tolower(s[left]) != tolower(s[right]))
            {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
