#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	if(n == 1) return arr[0];
	int ans = arr[0], count = 1, finalCount = 0;
	for(int i=1; i<n; i++){
		if(arr[i] != ans){
			count--;
			if(count == 0){
				ans = arr[i];
				count++;
			}
		} else count++;
	}
	for(int i=0; i<n; i++){
		if(arr[i] == ans) finalCount++;
	}
	if(finalCount > n/2) return ans;
	return -1;
}