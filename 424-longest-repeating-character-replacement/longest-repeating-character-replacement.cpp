class Solution {
public:
    int characterReplacement(string s, int k) {
        
        int n = s.size();
        
        if(n==0 || k<0) return 0;

        vector<int> freq(26,0);

        int left=0;
        int maxfreq=0;
        int maxlen=0;

        for(int right=0; right<n; right++){
            
            int index = s[right]-'A';
            freq[index]++;

            maxfreq = max(maxfreq, freq[index]);

            int currlen= right- left+1;

            if(currlen - maxfreq >k){
                freq[s[left]-'A']--;
                left++;

            }

            currlen= right- left+1;

            maxlen= max(maxlen,currlen);


        }
        return maxlen;
        

    }
};