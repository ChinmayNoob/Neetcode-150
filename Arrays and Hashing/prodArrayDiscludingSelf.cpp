class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size();
        vector<int> output(len,1);

        int preProduct=1;
        int suffProduct=1;

        for(int i=0;i<len;i++){
            output[i]=preProduct;
            preProduct=preProduct*nums[i];
        }

        for(int i=len-1;i>=0;i--){
            output[i]=output[i]*suffProduct;
            suffProduct=suffProduct*nums[i];
        }

        return output;


    }
};
