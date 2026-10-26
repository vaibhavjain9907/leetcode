class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mpp;
       
        for(auto num : nums){
            mpp[num]++;
        }
         int maxfreq = 0;
        for(auto entry  : mpp){
            if(entry.second > maxfreq){
                maxfreq = entry.second;
            }
           
        }
        int ans = 0;
        for (auto entry : mpp) {
            if (entry.second == maxfreq) {
                ans += entry.second;
            }
        }

        return ans;
    }
};