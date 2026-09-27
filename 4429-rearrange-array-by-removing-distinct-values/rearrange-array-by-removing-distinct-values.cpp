class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        if (nums.size() == 0 || nums.size() == 1)
            return nums;
        for (int i = 0; i < nums.size(); i++) {
            if (ans.size() == 0) {
                ans.push_back(nums[i]);
                nums[i] = -10000009;
            }

            else if (nums[i] != ans.back()) {
                ans.push_back(nums[i]);
                nums[i] = -10000009;
            }
        }
        int count = 0;
        while (count < nums.size()) {
            count = 0;

            for (int i = 0; i < nums.size(); i++) {
                count = 0;
                int last = 0;

                for (int i = 0; i < nums.size(); i++) {
                    if (nums[i] != -10000009 && nums[i] != last) {
                        int val = nums[i];

                        ans.push_back(val);
                        last = val;
                        nums[i] = -10000009;
                    }
                }
                for (int i = 0; i < nums.size(); i++) {
                    if (nums[i] == -10000009)
                        count++;
                }
            }
        }
        return ans;
    }
};