class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0 ;
        int last = s.size() - 1;;
        for(int i = last; i >= 0; i--){
            if(s[i] == ' '){
                if(count > 0){
                    break;
            }}
            else{
        count++;
        }}
        return count;
    }
};