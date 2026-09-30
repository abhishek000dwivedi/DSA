class Solution {
private:
       void solve(vector<int>& candidates, vector<vector<int>> &ans,vector <int> curr,int target, int n ){
      
        if(target==0){
            ans.push_back(curr);
            return;
        }
        if(n==candidates.size() || target<0) return;

        //take
        curr.push_back(candidates[n]);
        solve(candidates, ans, curr, target-candidates[n],n);

        curr.pop_back();

        //dont take
        solve(candidates, ans, curr,target,n+1);

        

        }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector <int> curr;
        
        solve(candidates, ans, curr, target,0);
        return ans;
    }
};