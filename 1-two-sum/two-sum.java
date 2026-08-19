class Solution {
    public int[] twoSum(int[] nums, int target) {
        
        HashMap<Integer,Integer> mpp = new HashMap<>();
        for(int  i = 0 ; i < nums.length;i++){
            int ans = target -  nums[i];
            if(mpp.containsKey(ans)){
            return new int[]{mpp.get(ans),i};
        }
        mpp.put(nums[i],i);
    
        }
        return new int[]{};
}

}