class Solution {
public:

    long long subArrayRanges(vector<int>& nums) {

        long long sum=0;
        // vector<int> leftMaxprefix(nums.size());
        // leftMaxprefix[0] = nums[0];

        // for(int i= 1 ; i< nums.size(); i++){
        //     leftMaxprefix[i] = max(leftMaxprefix[i-1],nums[i]);
        // }
        
        long long mini=INT_MAX;
        long long maxi= INT_MIN;

        for(int i=0; i< nums.size() ; i++){
            mini= INT_MAX;
            maxi= INT_MIN;
            for(int j=i; j<nums.size(); j++){

                mini= min(mini, 1LL* nums[j]);
                maxi= max(maxi, 1LL* nums[j]);
                sum= sum+ maxi-mini;
            
            }
        }

        return sum;
    }
};