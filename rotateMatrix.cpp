#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    // Write your code here
    int startRow = 0, startCol = 0, endRow = n-1, endCol = m-1;
    while(startRow < endRow && startCol < endCol){

        int temp = mat[startRow][startCol];
        // 1st Loop ( top-bottom )
        for(int i=startRow+1; i <= endRow; i++){
            mat[i-1][startCol] = mat[i][startCol];
        }

        // 2nd Loop ( left-right )
        for(int i=startCol+1; i <= endCol; i++){
            mat[endRow][i-1] = mat[endRow][i];
        }

        // 3rd Loop ( bottom-top )
        for(int i=endRow; i >= startRow+1; i--){
            mat[i][endCol] = mat[i-1][endCol];
        }

        // 4th Loop ( right-left )
        for(int i=endCol; i >= startCol+1; i--){
            mat[startRow][i] = mat[startRow][i-1];
        }

        // Fill the temp Value
        mat[startRow][startCol+1] = temp;

        // Auxiliaries for the while loop
        startRow++;startCol++;endRow--;endCol--;

    }
}









