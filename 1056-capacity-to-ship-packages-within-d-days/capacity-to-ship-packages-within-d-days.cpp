class Solution {
public:
    int summ(vector<int>& weights){
        int sum = 0 ;
        for(int i = 0 ; i < weights.size(); i++){
            sum += weights[i];
        }
        return sum;
    }
    int daysneeded(vector<int>& weights,int val){
        int days = 1;
         int currentload = 0;
        for(int i = 0 ; i  < weights.size() ; i++){
           
            if(currentload + weights[i] > val){
                days++;
                currentload = weights[i];
            }
            else{
                currentload += weights[i];
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int maxi = *max_element(weights.begin(),weights.end());
        int low = maxi;
        int high = summ(weights);
        int ans = high;
        while(low <= high){
            int mid = low + (high - low) /2;
            int needed = daysneeded(weights,mid);
            if(needed <= days){
                ans = mid;
                high  = mid-1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};