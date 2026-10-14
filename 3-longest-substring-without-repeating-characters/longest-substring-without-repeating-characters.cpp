class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int n = s.size();
       vector<int> array(128, 0);
        int left=0;
        int maxi=0;

        for(int i=0; i<n ; i++){
            
            while(array[s[i]]>0){
                array[s[left]]--;
                left++;
            }

           array[s[i]]++;
           maxi= max(maxi,i-left+1); 

        }

        return maxi;
    }
};