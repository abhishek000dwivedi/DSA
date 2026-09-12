class Solution {
public:
    int totalNumbers(vector<int>& digits) {
       int n = digits.size();
       set<int> st;
       int count=0;
       for(int i =0; i<n;i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
                if(i==j || i==k || j==k) continue;
               else if(digits[i]==0) continue;
                else if(digits[k]%2==0){
                     count++;
                     int num= digits[i]*100+ digits[j]*10+ digits[k];
                     st.insert(num);
                     }
                 
            }
        }
       }
       return st.size();

    }
};