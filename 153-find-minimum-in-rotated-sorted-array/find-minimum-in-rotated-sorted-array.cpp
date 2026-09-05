class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0, high = nums.size()-1;
        int ans =INT_MAX;

        while(low <= high){

            int mid = low + (high - low)/2;
            //if array is sorted thn arr[low] < arr[high] then we can do one thing just return the low and break
            if(nums[low] < nums[high]){
                ans = min(ans,nums[low]);
                break;
            }

            //left half
            if(nums[low] <= nums[mid]){
                ans = min(ans,nums[low]);
                low = mid+1;

            }
            else{
                ans = min(ans,nums[mid]);
                high = mid-1;
            }

            
        }
        return ans;
    }
};