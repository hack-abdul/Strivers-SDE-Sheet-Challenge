#include <bits/stdc++.h>

pair<long,long> missingAndRepeating(vector<int> &arr, long long n)
{
	// S and SN
	// S2 and S2N
	// long long size = n;
	long long S = 0, S2 = 0;
	long long SN = (n*(n+1))/2, S2N = (n*(n+1)*(2*n + 1))/6;
	
	for(int i=0; i<n; i++){
		S += arr[i];
		S2 += (long long)arr[i] * (long long)arr[i];
	}

	// considering x:repeating and y:missing
	long long val1 = S - SN; // x-y
	long long val2 = S2 - S2N;
	val2 = val2/val1; // x+y
	
	long long repeating = (val1 + val2)/2;
	long long missing = repeating - val1;

	pair<long, long> ans;
	ans.first = missing; 
	ans.second = repeating;
	return ans;
	
	
}
