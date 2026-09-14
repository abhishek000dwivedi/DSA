class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
       
        int n = nums.size(); 
        vector<int> ans(n);
        int count=0;
        stack<int> st;

        int i= n-1;
        while(i>=0){


            while( !st.empty() &&st.top() <= nums[i]){
                st.pop();
            }

              if(st.empty()){
                st.push(nums[i]);
            }

            else if( !st.empty() && nums[i] < st.top()){
                    st.push(nums[i]);
            }
            i--;

        }
        int k =n-1;
        while(k>=0){

            while(!st.empty() && nums[k] >= st.top() )
            st.pop();

            if(!st.empty() && st.top()>nums[k]){
                ans[k]=st.top();
                st.push(nums[k]);
            }

            else if(st.empty()){
                ans[k]=-1;
                st.push(nums[k]);
            }

        k--;

        }


    
return ans;
    }
};