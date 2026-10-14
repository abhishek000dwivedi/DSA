class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        
        int n = cardPoints.size();
        int sum=0;
        int iteration=0;
        int sum2=0;

        if(k==n) return accumulate(cardPoints.begin(), cardPoints.end(), 0);

        int left=0; 
        int right= n-1;

        for(int i=0; i<n ; i++){
          

            sum= sum+ cardPoints[i];
            if(i+1==k){ 
                left=i;
                break;
                }
        }

            int maxi=sum;
        while(iteration<k){

            sum= sum- cardPoints[left] + cardPoints[right];
            left--;
            right--;
            maxi= max(sum,maxi);
            
            iteration++;
           
        }

        return maxi;

    }
};