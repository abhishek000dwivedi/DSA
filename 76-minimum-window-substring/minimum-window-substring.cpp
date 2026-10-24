class Solution {
public:
    string minWindow(string s, string t) {
        
        int left=0;
        int right=0;
        int mini=INT_MAX;
        int currwindow=0;
        unordered_map<char,int> mpp;
        int ReqCount=0;

        int n = s.size();
        int m = t.size();
        int i =0;


        if(m>n) return "";



        for(int i =0; i<m;i++){
            mpp[t[i]]++;
            ReqCount++;
        }

       while(right<n){
       

        char ch =s[right];

        if(mpp[ch]>0) ReqCount--;

        mpp[ch]--;

        while(ReqCount==0){

            int currwindow= right-left+1;

            if(mini > currwindow){
                mini=currwindow;
                i=left;
            }
            mpp[s[left]]++;

            if(mpp[s[left]]>0) ReqCount++;
            
            left++;
           

        }

        right++;

        }
        
        return mini==INT_MAX ? "" : s.substr(i, mini) ;


    }
};