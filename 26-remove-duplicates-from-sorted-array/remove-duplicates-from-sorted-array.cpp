class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left = 0 ;
        int right = 1;
        int unique = 1;
        while(right <= nums.size()-1){
            if(nums[left] == nums[right]){
                right++;
                continue;
            }
            
        nums[left+1] = nums[right];
        left++;
        right++;
        unique++;
            
        }
        
        return unique;
        }
};