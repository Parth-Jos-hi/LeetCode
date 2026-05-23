class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int s = nums.size();
        int count = 0;
        for(int i =0;i<s;i++){
            for(int j =i+1;j<s;j++){
                if(nums[i]-nums[j]==k||nums[j]-nums[i]==k){
                    count++;
                }
            }
        }
      return count;  
    }
};