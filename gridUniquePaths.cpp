#include <bits/stdc++.h> 
int uniquePaths(int m, int n) {
	// considering the cominatrix approach ...
	// let rows+cols-2 = n and min(row-1,cols-1) = r
	// applying nCr formula for n number of places
	// and r number of pieces to place in them ...
	// here r is nothing but the number of right or down moves
	int r = min ((m-1), (n-1)), N = m + n -2, ans = 1;
	for(int i=1; i<=r; i++){
		ans = (ans * N--)/i ;
	}
	return ans;
}