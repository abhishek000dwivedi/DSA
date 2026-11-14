class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
       

        priority_queue<int> pq;

        for(int i =0; i<piles.size(); i++){
            pq.push(piles[i]);
        }


        while(k--){
            int maxi = pq.top();
            pq.pop();
            maxi= maxi-(maxi/2);
            pq.push(maxi);
                  }
        int sum=0;

        while(!pq.empty()){
            sum+=pq.top();
            pq.pop();
        }
        return sum;

}

};
