class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>freq;
        int i ,j=0;
        long long sum = 0;
        long long MAX =INT_MIN;
        for(int i =0;i<k;i++){
            freq[nums[i]]++;
            if(freq[nums[i]]>1){
                MAX = 0;
                sum =0;
                break;
            }
            else{
            sum = sum+nums[i];
            }
        }           
        MAX  = max(MAX,sum);
        i=0;
        for(int j=k;j<n;j++){
            freq[nums[j]]++;
            freq[nums[i]]--;
            sum = sum+nums[j];
            sum = sum-nums[i];
            i++;
            if(freq[nums[j]]>1){    
                break;
            }
            MAX  = max(MAX,sum);             
        }
        return MAX;
    }
};