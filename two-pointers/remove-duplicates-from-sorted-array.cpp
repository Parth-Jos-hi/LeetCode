class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n,0);
        int count=1;
        ans[0]= nums[0];
        for(int i =1;i<n;i++){
            bool anss = true;
            for(int j =0;j<count;j++){
                if(nums[i]==ans[j]){
                    anss = false;
                    break;
                }
            }
            if(anss){
                ans[count++] = nums[i];
            }
        }
        for(int i =0;i<count;i++){
            nums[i]= ans[i];
        }
        return count;
    }
};