class Solution {
public:
    int helper(vector<int>nums,int start ,int end ,int target){
        if(start>end) return -1;
        int mid = start +(end-start)/2;
        if(nums[mid] == target){
            return mid;
        }
        else if(nums[mid]>target){
            return helper(nums,start,mid-1,target);
        }
        else{
             return helper(nums,mid+1,end,target);
        }
    }
    int search(vector<int>& nums, int target) {
        int end = nums.size()-1;
        return helper(nums,0,end,target);
    }
};