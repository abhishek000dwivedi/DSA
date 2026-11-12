class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        
        int inc_count=1;
        int count1=1;
        int dec_count=1;
        int count2=1;

        for(int i=0; i<nums.size()-1; i++){
            
            if(nums[i]<nums[i+1]){
                count1++;
                inc_count=max(inc_count,count1);
            }
            else {
                count1=1;
            }
        }

            for(int i=1; i<nums.size(); i++){
            
            if(nums[i]<nums[i-1]){
                count2++;
                dec_count=max(dec_count,count2);
            }
            else {
                count2=1;
            }
        }

    return max(inc_count,dec_count);
    }

};