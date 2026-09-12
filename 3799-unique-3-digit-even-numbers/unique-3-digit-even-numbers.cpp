class Solution {
public:
    int totalNumbers(vector<int>& digits) {
       int f[10]={0};
       int ans=0;
       int n =digits.size();

       for(int i =0; i<n ; i++){
        f[digits[i]]++;
       }

       for(int i =1; i<10; i++){
        for(int j=0; j<10 ;j++){
            for(int k=0; k<9; k+=2){
             ans= ans+ (f[i]>0 && f[j]>(i==j) && f[k]>(i==k)+(j==k));

            }
        }
       }

return ans;
         }
};