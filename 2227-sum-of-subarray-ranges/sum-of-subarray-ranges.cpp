class Solution {
public:
    long long maxSum(vector<int>& nums){

            vector<int> left(nums.size());
            vector<int> right(nums.size());  
            stack<int> st; 
            //leftmax
            for(int i=0 ; i<nums.size() ; i++){
                
                while(!st.empty() && nums[st.top()] <= nums[i]){
                   
                    st.pop();

                }

                if(st.empty()){
                    left[i]=-1;

                }

                else{
                    left[i]=st.top();
                   
                }
                st.push(i);

            }

            while(!st.empty())
               st.pop();

            //rightmax
            for(int i=nums.size()-1 ; i>=0; i--){
                
                while(!st.empty() && nums[st.top()] < nums[i]){
                    st.pop();
                }

                if(st.empty()) {
                    right[i]=nums.size();
                }
                else{
                    right[i]=st.top();
                }
                st.push(i);

            }
            long long sum=0;

            for(int i =0; i<nums.size(); i++){
                int Lind = i-left[i];
                int Rind = right[i] -i;

                sum= sum+ 1LL*nums[i]*Lind*Rind;


            }
            return sum;

    }


        //sum min


    long long minSum(vector<int>& nums){

            vector<int> left(nums.size());
            vector<int> right(nums.size());  
            stack<int> st; 
            //leftmax
            for(int i=0 ; i<nums.size() ; i++){
                
                while(!st.empty() && nums[st.top()] >= nums[i]){
                   
                    st.pop();

                }

                if(st.empty()){
                    left[i]=-1;

                }

                else{
                    left[i]=st.top();
                   
                }
                st.push(i);

            }

            while(!st.empty())
               st.pop();

            //rightmax
            for(int i=nums.size()-1 ; i>=0; i--){
                
                while(!st.empty() && nums[st.top()] > nums[i]){
                    st.pop();
                }

                if(st.empty()) {
                    right[i]=nums.size();
                }
                else{
                    right[i]=st.top();
                }
                st.push(i);

            }
            long long sum=0;

            for(int i =0; i<nums.size(); i++){
                int Lind = i-left[i];
                int Rind = right[i] -i;

                sum= sum+ 1LL*nums[i]*Lind*Rind;


            }
            return sum;

    }





    long long subArrayRanges(vector<int>& nums) {

        long long n = nums.size();
    
       
            //max
            long long maxi=  maxSum(nums);

            long long mini= minSum(nums);

      

        return maxi- mini;
    }
};