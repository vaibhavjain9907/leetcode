class Solution {
    public void dfs(int[][] cities, boolean[] visited,int src){
       visited[src] = true;
        for(int nbr = 0 ; nbr  < cities.length; nbr++ ){
            if(cities[src][nbr] == 1 && !visited[nbr] ){

                dfs(cities,visited,nbr);
            }
        }
    }
    public int findCircleNum(int[][] isConnected) {
        boolean[] visited = new boolean[isConnected.length];
        int provinces = 0;
        for(int i = 0 ; i < isConnected.length; i++){
            if(!visited[i]){
                provinces++;
                dfs(isConnected,visited,i);
            }
        }
        return provinces;
    }
}