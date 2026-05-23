class Solution {
public:
    string reverseVowels(string s) {
        int i = 0;
        int j= s.length()-1;
        unordered_set<char>help= {'a','e','i','o','u','A','E','I','O','U'};
        while(i<j){
          if(!help.count(s[i])){
            i++;
          }
          else if(!help.count(s[j])){
            j--;
          }  
          else {
            swap(s[i],s[j]);
            i++;
            j--;
          }
        }
        return s;
    }
};