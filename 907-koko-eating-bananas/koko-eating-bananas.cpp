class Solution {
public:
    long long reqtime(vector<int>& piles , int hourly){
        long long totalhrs = 0;
        for(int i = 0 ; i < piles.size(); i++){
            totalhrs += ceil((double)piles[i] / hourly);
        }
        return totalhrs;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1 ;
        int high = *max_element(piles.begin(), piles.end());
        int ans = high;
        while(low <= high){
            int mid = (low + high) / 2;
            long long func = reqtime(piles,mid);
            if(func <= h){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }     
        return ans;
    }
};