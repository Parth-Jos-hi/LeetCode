class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.size();
        int index = -1;
        for(int i =0;i<n;i++){
            bool ans = false;
            for (int j =0;j<n;j++){
            if(i!=j&&s[i]==s[j]){
                ans = true;
                break;
            }
            }
            if(ans == false){
                index =i;
                break; 
            }
        }
        return index;
    }
};