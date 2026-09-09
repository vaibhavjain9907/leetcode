class Solution {
    public void dfs(List<List<Integer>>rooms,boolean[] visited, int src){
        for(int nbr :rooms.get(src)){
            if(!visited[nbr]){
                visited[nbr] = true;
                dfs(rooms,visited,nbr);
            }
        }
    }
    public boolean canVisitAllRooms(List<List<Integer>> rooms) {
        boolean[] visited = new boolean[rooms.size()];
        visited[0] = true;
        dfs(rooms,visited,0);
            for(boolean v:visited){
                if(!v){
                    return false;
                }
            }
            return true;
        }
}