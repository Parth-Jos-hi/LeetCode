class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int x = nums.size();
        vector<int>ans(x);
        int m = 0;
        for(int i =0;i<x;i+=2){
            ans[i] = nums[m];
            m++;
        }
        for(int i = 1;i<x;i+=2){
                ans[i] = nums[m];
            m++;
        }
        return ans;
    }
};