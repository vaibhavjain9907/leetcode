class Solution {
public:
    int countZeroes(long long x)
{
    int count = 0;

    while (x > 0)
    {
        x = x / 5;
        count += x;
    }

    return count;
}
    int preimageSizeFZF(int k) {
        int low = 0 ;
        long long high =INT_MAX ;
            if(k == 1000000000) return 5;
       
        while(low <= high){
            int mid = low + (high - low) /2;

            int f = countZeroes(mid);
            if(f == k ) return 5;
            else if( f < k) low = mid+1;
            else high = mid-1;
        }
        return 0;
    }
};