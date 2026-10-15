class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int n = nums.size();
        int r=0;
        
        int zeros=0;
        int maxLen =0;

        for(int i =0; i<n ; i++){

            if(nums[i]==0) zeros++;

            if(zeros<=k){
                maxLen= max(maxLen, i-r+1);
            }

            else{
                while(r<i){
                    if(nums[r]>0) r++;
                    else if(nums[r]==0) {
                        zeros--;
                        r++;
                        if(zeros<=k) break;
                    }
                }
            }


        
        }
        return maxLen;

    }
};