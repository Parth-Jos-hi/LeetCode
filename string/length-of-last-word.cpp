class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int n =(int)s.size()-1;
        for(int i =n ;i>=0;i--){
            if(s[n] == ' '){
                n--;
                continue;
            }
            if(s[i]==' '){
                break;
            }
            else {
                count++;
            }
        }
        return count;
    }
};