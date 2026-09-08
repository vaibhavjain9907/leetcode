class Solution {
public:
    int countCommas(int n) {
        if(n >= 1000){
             int ans = n - 1000;
             return ans +1;
        }
       
        return 0;
    }
};