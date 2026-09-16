class Solution {
public:
    int trap(vector<int>& height) {

            int total=0;
            int n = height.size();
            vector<int> maxPrefix(n,0);
            vector<int> maxSuffix(n,0);

            maxPrefix[0]= height[0];
            maxSuffix[n-1]=height[n-1];

            // for(int i =1; i<n; i++){
            //     maxPrefix[i]= max(height[i],maxPrefix[i-1]);
                
            // }

            for(int i=n-2; i>=0; i--){
                maxSuffix[i]= max(height[i],maxSuffix[i+1]);
            }

            int leftmax=0;


        for(int i=0; i< height.size(); i++){

            leftmax= max(height[i],leftmax);
            //  if( min(maxPrefix[i],maxSuffix[i])-height[i] >0 )    
            total = total + min(leftmax,maxSuffix[i])-height[i];

        }

    return  total;
         
    }
};