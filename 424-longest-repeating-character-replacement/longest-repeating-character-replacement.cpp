class Solution {
public:
    int characterReplacement(string s, int k) {
        
        int n = s.size();
        int left=0;
        int right=0;
        int count=0;
        int maxlen=0;
        map<char,int> mpp;
        int maxfeq;

        while(right < n){

          mpp[s[right]]++;
        
          maxfeq= max(maxfeq, mpp[s[right]]);


          while((right- left+1 -maxfeq)>k){
            mpp[s[left]]--;
            
            if(mpp[s[left]]==0){
                mpp.erase(s[left]);
            }
            left++;
          }

          if((right- left+1 -maxfeq)<=k){
            maxlen=max(maxlen, right-left+1);
          }  
          
            right++;
        }

        return maxlen;

    }
};