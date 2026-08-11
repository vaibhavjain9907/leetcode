class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int largest= 0;
        int last_smaller = INT_MIN;
        int cnt=0;
        for(int i =0;i<n;i++){
            if(nums[i] - 1 == last_smaller){
                cnt+=1;
                last_smaller = nums[i];
            }
            else if(nums[i] == last_smaller){
                continue;
            }
            else{
                cnt=1;
                last_smaller=nums[i];
            }
            largest = max(largest,cnt);
        }
        return largest;
    }
};