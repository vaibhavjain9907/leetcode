class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int candidate = 0;

        for (int i = 0; i < nums.size(); i++) {

            // if no current candidate
            if (count == 0) {
                candidate = nums[i];
            }

            // vote for candidate
            if (nums[i] == candidate) {
                count++;
            } 
            // cancel vote
            else {
                count--;
            }
        }

        return candidate;
    }
};
