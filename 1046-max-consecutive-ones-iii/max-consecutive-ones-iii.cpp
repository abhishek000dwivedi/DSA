class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int n = nums.size();
        int r=0;
        int left=0;
        
        int zeros=0;
        int maxLen =0;

       while(r<n){
        if(nums[r]==0) {
            zeros++;
        }
        if(zeros > k){
            if(nums[left]==0)
            zeros--;
                    left++;
        }

        if(zeros<=k){
            maxLen= max(maxLen,r-left+1);
        }
        r++;
       }
        return maxLen;
    }
};