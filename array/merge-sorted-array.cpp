class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> v(m + n);
        int i = 0, j = 0, k = 0;

        while (i < m && j < n) {
            if (nums1[i] < nums2[j]) {
                v[k] = nums1[i];
                i++;
            } 
            else if (nums1[i] > nums2[j]) {
                v[k] = nums2[j];
                j++;
            } 
            else { // nums1[i] == nums2[j]
                v[k] = nums1[i];
                k++;
                v[k] = nums2[j];
                i++;
                j++;
            }
            k++;
        }

        // copy leftovers
        while (i < m) {
            v[k] = nums1[i];
            i++;
            k++;
        }

        while (j < n) {
            v[k] = nums2[j];
            j++;
            k++;
        }

        // copy back into nums1
        for (int p = 0; p < m + n; p++) {
            nums1[p] = v[p];
        }
    }
};
