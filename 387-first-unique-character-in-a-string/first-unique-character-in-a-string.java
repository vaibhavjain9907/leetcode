class Solution {
    public int firstUniqChar(String s) {
        HashMap<Character,Integer> freq = new HashMap<>();
        for(char ch : s.toCharArray()){
            freq.put(ch,freq.getOrDefault(ch,0)+1);
        }        
        for(int i = 0 ; i < s.length();i++){
            char ch  = s.charAt(i);
            if(freq.get(ch) == 1){
                return i;
            }
        }
        return -1;
    }
}