class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {

        long long count=0;
        long long n =arr.size();
        stack<int> st;
        vector<int> leftMin(n);
        vector<int> rightMin(n);

        for(int i=0 ; i<n; i++){
            
            while(!st.empty() && arr[st.top()] >= arr[i] ){
                st.pop();
            }

            if(st.empty()){
                leftMin[i]=-1;
                st.push(i);
            }

            else{
                leftMin[i]=st.top();
                st.push(i);
            }

        }

        while(!st.empty()) st.pop();

        for(int i =n-1 ; i>=0 ; i--){

            while( !st.empty() && arr[st.top()] > arr[i] ){
                st.pop();
            }

            if(st.empty()){
                rightMin[i]= n;
                st.push(i);
            }

            else{
                rightMin[i]= st.top();
                st.push(i);
            }

        }
                int mod= 1e9+7;


        for(int i =0; i<n; i++){
          long long ls= i- leftMin[i];
          long long rs= rightMin[i]-i;

          long long totalways= ls*rs;

          count = (count+ 1LL*arr[i]*totalways) %mod;
        
        }

        
        

        return count ;
    }
};