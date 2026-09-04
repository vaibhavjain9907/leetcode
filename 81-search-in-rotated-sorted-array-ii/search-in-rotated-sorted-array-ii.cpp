class Solution {
public:
    bool search(vector<int>& nums, int k) {
        int low = 0 , high = nums.size()-1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] == k){
                return true;
            }
            if(nums[low] == nums[high] && nums[high] == nums[mid]){
                low++,high--;
                continue;
            }
            //left sorted
            if(nums[low] <= nums[mid]  ){
                if(nums[low] <= k && k <= nums[mid]){
                    high = mid-1;
                }
                else {
                    low = mid+1;
                }
            }
            else{
                if(nums[mid] <= k && k <= nums[high]){
                    low = mid+1;
                }
                else{
                    high = mid-1;
                }
            }
        }
        return false;
    }
};