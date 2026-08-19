class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        HashSet<Integer> mpp1 = new HashSet<>();
        HashSet<Integer> result = new HashSet<>();
        for(int i = 0 ; i < nums1.length;i++){
            mpp1.add(nums1[i]);
        }
        for(int num:nums2){
            if(mpp1.contains(num)){
                result.add(num);
            }
        }
        int[] ans = new int[result.size()];
        int i = 0 ; 
        for(int num:result){
            ans[i] = num;
            i++;
        }
        return ans;
    }
}