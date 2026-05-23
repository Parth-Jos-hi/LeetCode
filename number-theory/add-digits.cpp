class Solution {
public:
    int ans(int num){
        int temp = num;
        int add =0;
        while(temp!=0){
            int rem = temp%10;
            add +=rem;
            temp = temp/10;
        }
        if(add>=10){
        return ans(add);
        }
       return add;
    }
    int addDigits(int num) {
        int go = ans(num);
        return go;
    }
};