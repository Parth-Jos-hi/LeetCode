class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       int n = nums1.size();
       int m = nums2.size();
       unordered_set<int>s(nums1.begin(),nums1.end());
       vector<int>ans;
       for(int num : nums2){
        if(s.count(num)){
            ans.push_back(num);
            s.erase(num);
        }
       }
       return ans;
    }
};