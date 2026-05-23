class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum =0;
        int i,j=0;
        for(int i =0;i<k;i++){
            sum = sum+nums[i];
        }
        double MAX = sum;
        i=0;
        for(int j =k;j<nums.size();j++){
            sum = sum+nums[j];
            sum = sum-nums[i];
            i++;
            MAX = max(MAX,sum);
        }
        return MAX/k;
    }

};