class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        bool result = true;
        string ch="";
        for(int i =0; i< words.size(); i++){

            ch = ch + words[i];

            // string ans="";

            // for(int j=0; j < s.size(); j++){
            //     ans= ans + s[j];
            //    if(ch== s) return true; 
            //    else return false;
            // }
            
            if(ch==s) return true ;
            

        }   

        return false;

    }
};