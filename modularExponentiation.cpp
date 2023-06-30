#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
	// Write your code here.
	if(n == 0) return 1;
	long long ans = 1;
	long long copyX = x;
	int copyN = n;
	while(copyN){
		if(copyN % 2){
			// it's odd so now n should be decreased by one 
			// and ans = ans * x
			ans = (ans * copyX) % m;
			copyN--;
		}else{
			// it's even so x should be multiplied by itself
			// n should be divided by two
			copyX = (copyX * copyX) % m;
			copyN >>= 1;
		}
	}
	return (int)(ans % m);
}