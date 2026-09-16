class Solution {
public:
    int trap(vector<int>& height) {
    int n= height.size();
    int left=0; 
    int right=n-1;

    int leftmax=0;
    int rightmax=0;

    int total=0;

    while(left < right){

        leftmax= max(height[left],leftmax);
        rightmax= max(height[right],rightmax);  

        if(leftmax < rightmax){
            total= total+leftmax-height[left];
            left++;
        }
        else{
            total= total+ rightmax-height[right];
            right--;
        }

    }

    return  total;
         
    }
};