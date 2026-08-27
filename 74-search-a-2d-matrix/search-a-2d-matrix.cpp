class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
     int row = matrix.size();
     int col = matrix[0].size();
      int s = 0 ; 
      int e = (row*col) - 1;
     
      while(s <= e){
         int mid = s + (e-s) / 2;
      int element = matrix[mid/col][mid%col];
        if(element == target){
            return 1;
        }
        else if(element < target){
            s = mid+1;
        }
        else {
            e = mid - 1;
        }
        
        

      }  
          return 0;

    }
};