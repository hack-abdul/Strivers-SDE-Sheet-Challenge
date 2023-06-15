#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{

	// rowArr : matrix[i][0]
	// colArr : matrix[0][j]
	
	// Write your code here.
	int rows = matrix.size();
	int cols = matrix[0].size();

	int colSet = 1;

	// Take the markings 
	for(int i=0; i<rows; i++){
		for(int j=0; j<cols; j++){
			if(matrix[i][j] == 0){
				if(j == 0) colSet = 0;
				else{
				// mark the rowArr
				matrix[i][0] = 0;
				// mark the colArr
				matrix[0][j] = 0;
				}
				
			}
		}
	}

	// Modify the mat acc. to the markings

	// check in the rowArr
	for(int i=1; i<rows; i++){
		if(matrix[i][0] == 0){
			// make entire row zero
			for(int j=1; j<cols; j++){
				matrix[i][j] = 0;
			}
		}
	}

	// check in the colArr
	for(int i=1; i<cols; i++){
		if(matrix[0][i] == 0){
			// make entire col zero
			for(int j=1; j<rows; j++){
				matrix[j][i] = 0;
			}
		}
	}

	// check for rowArr[0]
	if(matrix[0][0] == 0){
		for(int i=0; i<cols; i++){
			matrix[0][i] = 0;
		}
	}

	// check for colArr[0]
	if(colSet == 0){
		for(int i=0; i<rows; i++){
			matrix[i][0] = 0;
		}
	}
	return;
}