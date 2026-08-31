class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int i = 0;
        int max_prod = nums[0];
        int ans = max_prod;
        int min_prod = nums[0];
        for(int i = 1; i < nums.size();i++){
            int v1 = max_prod* nums[i];
            int v2 = nums[i];
            int v3 = min_prod*nums[i];
            max_prod = max(v1,max(v3,v2));
            min_prod = min(v2,min(v3,v1));
            ans = max(ans,max(max_prod,min_prod));
        }
        return ans;
    }
};