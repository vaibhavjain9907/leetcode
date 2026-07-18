class Solution {
public:
    int reverse(int x) {
        int y = x;
        x=0;
        while(y!=0){
           
            if (x>INT_MAX/10){
                return 0;
            }
            if (x<INT_MIN/10){
                return 0;
            }
            x=10*x+y%10;
            y=y/10;
            }
        
        
        return x;
    }
};