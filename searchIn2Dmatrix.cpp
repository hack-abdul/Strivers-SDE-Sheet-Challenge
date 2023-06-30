bool searchMatrix(vector<vector<int>>& mat, int target) {
        int rows  = mat.size(), cols = mat[0].size();
        int s = 0, e = (rows * cols) - 1, mid = e + (s-e)/2 ;
        while(s <= e){
            int rowNo = mid / cols, colNo = mid % cols, current = mat[rowNo][colNo];
            if(current == target) return 1;
            else if(current < target) s = mid + 1;
            else e = mid - 1;
            mid = e + (s-e)/2;
        }
        return 0;
}