class Solution {
public:

   


    int largestRectangleArea(vector<int>& heights) {
      
        int maxi=0;

         vector<int> left(heights.size());

        stack<int> st;

        for(int i =0; i<heights.size(); i++){
            
            while(!st.empty() && heights[st.top()] > heights[i] ){
                st.pop();
            }

            if(st.empty()){
                st.push(i);
                left[i]=-1;
            }
            else{
                left[i]=st.top();
                st.push(i);

            }
        }

        while(!st.empty()){
            st.pop();

        }

        vector<int> right(heights.size());

        for(int i=heights.size()-1; i>=0;i--){
             
            while(!st.empty() && heights[st.top()] >= heights[i] ){
                st.pop();
            }

            if(st.empty()){
                st.push(i);
                right[i]=heights.size();
            }

            else{
                right[i]=st.top();
                st.push(i);

            }

        }



        for(int i =0; i< heights.size(); i++){

            maxi= max(maxi, heights[i]*(right[i]-left[i]-1));

        }

        return maxi;

    }
};