class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target){
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int close_sum =nums[0]+nums[1]+nums[2];
        for(int i =0;i<n-2;i++){
            int j =i+1;
            int k =n-1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(abs(sum-target)<abs(close_sum-target)){
                    close_sum = sum;
                }
                if(sum>target){
                    k--;
                }
                else{
                    j++;
                }
            }
        }
        return close_sum;
    }
};