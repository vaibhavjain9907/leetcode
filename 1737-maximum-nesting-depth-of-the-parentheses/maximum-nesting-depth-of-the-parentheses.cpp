class Solution {
public:
    int maxDepth(string s) {
        int depth = 0;
        int maxdepth = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == '('){
                depth++;
                maxdepth = max(depth,maxdepth);
            }
            if(s[i] == ')'){
                depth--;
            }
        }
        return maxdepth;
    }
};