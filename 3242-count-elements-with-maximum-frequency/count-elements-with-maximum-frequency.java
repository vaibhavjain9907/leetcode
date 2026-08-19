class Solution {
    public int maxFrequencyElements(int[] nums) {
        HashMap<Integer,Integer> map= new HashMap<>();
        for(int i = 0 ; i < nums.length;i++){
            map.put(nums[i],map.getOrDefault(nums[i],0)+1);

        }
        int maxFreq=0;
        for(int count : map.values()){
            maxFreq = Math.max(maxFreq,count);
        }
        int ans=0;
        for(int count : map.values()){
            if(count == maxFreq){
                ans+=count;
            }
        }

        
        return ans;
    }
}