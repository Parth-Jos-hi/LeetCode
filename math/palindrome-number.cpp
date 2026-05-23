class Solution {
public:
    bool isPalindrome(int x) {
        if(x<INT_MIN||x>INT_MAX) return false;
        if(x<0) return false;
        int temp = x;
        long long ans = 0;
        while(x!=0){
            int rem = x%10;
            ans = ans*10+rem;
            x = x/10;
        } 
        if(temp ==ans ){
            return true;
        }
        else {
            return false;    
    }
    }
};
