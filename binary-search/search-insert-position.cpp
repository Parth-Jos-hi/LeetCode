class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int size = nums.size();
        int start = 0;
        int end = size-1;
        int mid = start +(end-start)/2;
        int ans = 0;
        while(start<=end){
            mid = start +(end-start)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                end = mid-1;
            }

            else{
                start = mid+1;
            }
        }
        return start;
    }
};