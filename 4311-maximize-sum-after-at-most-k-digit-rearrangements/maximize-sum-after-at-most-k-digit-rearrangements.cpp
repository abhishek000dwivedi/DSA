class Solution {
public:
    long long maximizeSum(vector<int>& nums, int k) {
        
        int n = nums.size();
        vector<int> temp(n);


        long long sum = accumulate(nums.begin(), nums.end(), 0LL);  

        long long benifit = 0;

        for(int i=0; i<n ;i++){
            
            int ans=0;
            string s= to_string(nums[i]);
            sort(s.begin(),s.end(),greater<char>());
            ans = stoi(s);
            
            temp[i]= ans-nums[i];
            // if(k>0) {
            //     sum  += (ans-nums[i]);
            //     k--;
            //     }
            
            // else{
            //     sum= sum+ nums[i] ;
            // }   


        }
        sort(temp.begin(),temp.end(), greater<int>());

        for(int i=0; i<n; i++){
            if(k>0){
                sum= sum+temp[i];
                k--;
            }
        }
              

        return sum;

    }
};