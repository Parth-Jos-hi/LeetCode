class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int count = 0;
        int i = 0, j = 1;

        while (i < n && j < n) {
            if (i == j || nums[j] - nums[i] < k) {
                j++; // increase difference
            } else if (nums[j] - nums[i] > k) {
                i++; // decrease difference
            } else { // nums[j] - nums[i] == k
                count++;
                i++;
                // skip duplicates
                while (i < n && nums[i] == nums[i-1]) i++;
            }
        }
        return count;
    }
};
