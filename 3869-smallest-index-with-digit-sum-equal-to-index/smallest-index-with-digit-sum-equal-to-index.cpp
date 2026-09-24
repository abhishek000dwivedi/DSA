class Solution {
public:
    int Sum(int k){
        int count=0;
        while(k){
            int rem= k%10;
            count=count+rem;
            k=k/10;
        }
        return count;
    }
    int smallestIndex(vector<int>& nums) {

        int n = nums.size();

        for(int i=0; i<n ; i++){

            int k = Sum(nums[i]);
            if(k==i) return i;
           

        }
        return -1;
        
    }
};