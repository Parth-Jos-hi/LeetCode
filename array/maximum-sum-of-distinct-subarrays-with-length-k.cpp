class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>freq;
        int i ,j=0;
        long long sum = 0;
        long long MAX =INT_MIN;
        int curr_sum = 0;
        for(int i =0;i<k;i++){
            freq[nums[i]]++;
            sum = sum+nums[i];
            if(freq[nums[i]]>1){
                curr_sum=0;
            }
            else{
            curr_sum = sum;
            }
        }     
        if(curr_sum!=sum) {
            MAX = 0;
        }   
        else{
        MAX  = max(MAX,sum);
        }
        i=0;
        int a = 0;
        for(int j=k;j<n;j++){
            freq[nums[j]]++;
            freq[nums[i]]--;
            sum = sum+nums[j];
            sum = sum-nums[i];
            a=i;
            i++;
            if(freq[nums[j]]>1||freq[a]>1){    
                continue;
            }
            MAX  = max(MAX,sum);             
        }
        return MAX;
    }
};