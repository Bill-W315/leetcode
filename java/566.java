/*
Time: m*n
Space m*n
*/
class Solution {
    public int[][] matrixReshape(int[][] mat, int r, int c) {
        int rows = mat.length;
        int columns = mat[0].length;
        
        if(rows*columns != r * c){
            return mat;
        }
        
        int[][] ans = new int[r][c];
        int column_count = 0;
        int row_count = 0;
        for(int i = 0; i < rows ; i++){
            for(int j = 0 ; j < columns; j++){
                ans[row_count][column_count] = mat[i][j];
                column_count++;
                if(column_count == c){
                    column_count = 0;
                    row_count++;
                }    
            }
        }
        return ans;
    }
}
