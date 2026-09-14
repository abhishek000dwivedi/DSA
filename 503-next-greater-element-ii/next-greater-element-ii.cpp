class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans;
        int count=0;

       for(int i =0; i< nums.size(); i++){
        int k=(i+1)%(nums.size());
        count=0;
        while(1){
            
            if(k==i) break;
            if(nums[k]>nums[i]) {
                ans.push_back(nums[k]);
                count++;
                break;
            }
            k=(k+1) % nums.size();
            
        }
        if(count==0) ans.push_back(-1);

       }

return ans;
    }
};