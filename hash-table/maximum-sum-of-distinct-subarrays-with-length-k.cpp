class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> freq;
        long long sum = 0;
        long long MAX = 0;
        int i = 0;
        for(int j = 0; j < n; j++) {
            freq[nums[j]]++;
            sum += nums[j];
            while(freq[nums[j]] > 1 || j - i + 1 > k) {
                freq[nums[i]]--;
                sum -= nums[i];
                i++;
            }
            if(j - i + 1 == k) {
                MAX = max(MAX, sum);
            }
        }
        return MAX;
    }
};

