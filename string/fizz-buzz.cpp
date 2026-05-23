class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>ans(n);
        int y =0;
        for(int i =1;i<n+1;i++){
            if(i%5==0&&i%3==0){
                ans[y] = "FizzBuzz";
            }
            else if(i%3==0){
                ans[y] = "Fizz";
            }
            else if(i%5==0){
                ans[y] = "Buzz";
            }
            else{
                ans[y] = to_string(i);
            }
            y++;
        }
        return ans;
    }
};