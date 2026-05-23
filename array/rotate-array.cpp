class Solution {
public:
    void rotate(vector<int>& nums, int k) {
         int size = nums.size();
    vector<int> ans(size);
    k = k%size;
    int j = 0;
    for (int i = size-k; i < size; i++) {
        ans[j] = nums[i];
        j++;
    }
    for (int i = 0; i < size-k; i++) {
        ans[j] = nums[i];
        j++;
    }
    for(int i = 0;i<size;i++){
        nums[i] = ans[i];
    }
    }
};