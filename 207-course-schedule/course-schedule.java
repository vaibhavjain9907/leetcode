class Solution {
    public boolean canFinish(int numCourses, int[][] prerequisites) {
        ArrayList<Integer>[] graph  = new ArrayList[numCourses];
        for(int i = 0 ; i < numCourses ; i++){
            graph[i] = new ArrayList<>();
        } 
        int[] indegree = new int[numCourses];
        
        for(int[] edge : prerequisites){
            int course = edge[0];
            int prequisites = edge[1];
            graph[prequisites].add(course);
            indegree[course]++;
        }
        Queue<Integer> que = new LinkedList<>();
        for(int i = 0 ; i < numCourses;i++){
            if(indegree[i] == 0){
                que.add(i);
            }
            
        }
        int count = 0;
        while(!que.isEmpty()){
            int current = que.remove();
            count++;
            for(int neighbour : graph[current]){
                indegree[neighbour]--;
                if(indegree[neighbour] == 0){
                    que.add(neighbour);
                }
            }
        }
         return count == numCourses;
        }
       
    
}