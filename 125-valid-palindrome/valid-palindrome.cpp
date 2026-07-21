class Solution {
private:
    bool isvalid(char ch) {
        return ( (ch >= 'a' && ch <= 'z') ||
                 (ch >= 'A' && ch <= 'Z') ||
                 (ch >= '0' && ch <= '9') );
    }

    char tolowercase(char ch) {
        if (ch >= 'A' && ch <= 'Z') {
            return ch - 'A' + 'a';
        }
        return ch;
    }

    bool checkplaindrome(const string& a) {
        int s = 0;
        int e = a.length() - 1;
        while (s < e) {
            if (a[s] != a[e]) {
                return false;
            }
            s++;
            e--;
        }
        return true;
    }

public:
    bool isPalindrome(string s) {
        string temp;
        temp.reserve(s.length()); 

        for (int j = 0; j < s.length(); j++) {
            if (isvalid(s[j])) {
                temp.push_back(tolowercase(s[j]));
            }
        }

        return checkplaindrome(temp);
    }
};
