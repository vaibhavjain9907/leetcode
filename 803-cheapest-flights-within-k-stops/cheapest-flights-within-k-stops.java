class Solution {
    public int findCheapestPrice(int n, int[][] flights, int src, int dst, int k) {
        int[] cost = new int[n];
        Arrays.fill(cost,Integer.MAX_VALUE);
        cost[src] = 0;
        for(int i = 0; i<= k;i++){
            int[] temp = cost.clone();
            for(int[] flight : flights){
                int from = flight[0];
                int to = flight[1];
                int price = flight[2];
                if(cost[from] == Integer.MAX_VALUE){
                    continue;   
                }
                int newCost = cost[from] + price;
                if(newCost < temp[to]){
                    temp[to] = newCost;
                }
            }
            cost = temp;
        }
        if(cost[dst]==Integer.MAX_VALUE){
            return -1;
        }
       return cost[dst]; 
    }
    
}