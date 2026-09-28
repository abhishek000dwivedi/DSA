class Solution {
public:
    int maxDepth(string s) {
        // stack<char> st;
        int maxi=0;
        int count=0;
        for(int i =0; i<s.size(); i++){
            
            if(s[i]==')' && count==0) continue;

            else if(s[i]=='('){
                count++;
                maxi=max(maxi,count);
            }
            else if(s[i]==')'){
                count--;
            }
            
        }
        return maxi;

    }
};