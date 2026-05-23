class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        int temp = n,ans = 0;
            while(temp!=0){
                temp = temp>>1;
                ans = (ans<<1)|1;
            }
            return n^ans;
    }
};