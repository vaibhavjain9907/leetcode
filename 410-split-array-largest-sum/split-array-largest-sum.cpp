class Solution {
    int spitarray(vector<int>&nums, int k){
        long subarraysum = 0  ; 
        int partition =1 ;
        for(int i  = 0  ;  i < nums.size() ; i++){
            if(subarraysum + nums[i] <= k){
                subarraysum += nums[i];

            }
            else{
                partition += 1;
                subarraysum = nums[i];
            }
        }
        return partition;
    }
   
public:
    int splitArray(vector<int>& nums, int k) {
         if( k > nums.size()) return 0;
        int low = *max_element(nums.begin() , nums.end());
        int high = accumulate(nums.begin(),nums.end(),0);
        while(low <= high){
            int mid = low + (high - low) /2;
            int sum = spitarray(nums,mid);
            if(sum > k ) low = mid+1;
            else high= mid-1;
        }
         return low;
    
    }
};