
class Solution {
public:
    int romanToInt(string s) {
        int result = 0;

        for (int i = 0; i < s.size(); i++) {
            int curr = 0, next = 0;

            if (s[i] == 'I') curr = 1;
            if (s[i] == 'V') curr = 5;
            if (s[i] == 'X') curr = 10;
            if (s[i] == 'L') curr = 50;
            if (s[i] == 'C') curr = 100;
            if (s[i] == 'D') curr = 500;
            if (s[i] == 'M') curr = 1000;

            if (i + 1 < s.size()) {
                if (s[i+1] == 'I') next = 1;
                if (s[i+1] == 'V') next = 5;
                if (s[i+1] == 'X') next = 10;
                if (s[i+1] == 'L') next = 50;
                if (s[i+1] == 'C') next = 100;
                if (s[i+1] == 'D') next = 500;
                if (s[i+1] == 'M') next = 1000;
            }

            if (curr < next)
                result -= curr;
            else
                result += curr;
        }

        return result;
    }
};
