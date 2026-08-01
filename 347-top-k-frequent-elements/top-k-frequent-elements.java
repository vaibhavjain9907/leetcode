class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        HashMap<Integer,Integer>map = new HashMap<>();
        for(int num : nums){
            map.put(num,map.getOrDefault(num,0)+1);
        }
        PriorityQueue<Integer>pq = new PriorityQueue<>((a,b) -> map.get(a) - map.get(b));
    
    for(int num:map.keySet()){
        pq.offer(num);
        if(pq.size() > k){
    pq.poll();
}
    }

int[] result = new int[k];
    for(int i  =  k - 1; i >= 0 ; i--){
    result[i] = pq.poll();
}
return result;
}
}