class Solution {
public:
    bool possibleday(vector<int>& bloomDay, int day, int m, int k){
        int cnt = 0 ; 
        int noofbq = 0;
        for(int i = 0 ; i < bloomDay.size();i++){
            if(bloomDay[i] <= day){
                cnt++;
            }
            else{
                noofbq += (cnt/k);
                cnt =0;
            }

        }
        noofbq+=(cnt/k);
        if(noofbq >= m) return true;
        else return false; 
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int mini = *min_element(bloomDay.begin(),bloomDay.end());
        int maxi = *max_element(bloomDay.begin(),bloomDay.end());
        int low = mini , high = maxi ,ans = -1;
        while(low <= high){
            int mid = (low + high) / 2;
            if(possibleday(bloomDay,mid,m,k) == true){
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