class Solution {
public:
    int romanToInt(string s) {
        int sum = 0, prev = 0;

        for (int i = (int)s.size() - 1; i >= 0; --i) {
            int val = 0;
            switch (s[i]) {
                case 'I': val = 1; break;
                case 'V': val = 5; break;
                case 'X': val = 10; break;
                case 'L': val = 50; break;
                case 'C': val = 100; break;
                case 'D': val = 500; break;
                case 'M': val = 1000; break;
                default: val = 0;
            }
            if (val < prev) sum -= val;   
            else            sum += val;  
            prev = val;
        }
        return sum;
    }
};
