class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n  = nums.size();
        vector<int>ans(2*n);
        int j =0;
        for(int i = 0;i<2*n;i++){
            ans[i]=nums[j];
            j++;
        if(i ==n-1){
            j =0;
        }
        }
        return ans;
    }
};