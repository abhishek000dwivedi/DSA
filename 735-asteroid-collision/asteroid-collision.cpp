class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {

        int n = asteroids.size();
        vector<int> st;


       for(int &a : asteroids){
        while(!st.empty() && a<0 && st.back()>0){
            int sum = a + st.back();

            if(sum<0){
                st.pop_back();
            }
            else if(sum>0){
                a=0;
            }
            else { //sum==0
                st.pop_back();
                a=0;
            }
        }

            if(a!=0) st.push_back(a);


        

       }

    //    while(!st.empty()){
    //     ans.push_back(st.back());
    //     st.pop_back();
    //    }
    //     reverse(ans.begin(),ans.end());
       return st;


    }
};