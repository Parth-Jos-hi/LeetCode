class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int target = val;
        int i = 0;
        int j = n-1;
        int ans = n;
        while(i<=j){
            if(nums[i]==target){
                nums[i]= '_';
                swap(nums[i],nums[j]);
                j--; 
                ans--; 
            }
            // if(nums[j]==target){
            //     nums[j]='_';
            //     j--;
            //     ans--;
            //     }
            if(nums[i]!= target){
                i++;
            }
        }
        return ans;
    }
};