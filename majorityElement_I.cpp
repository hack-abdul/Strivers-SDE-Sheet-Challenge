#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	int ele = arr[0], count = 0;
        for(int i=0; i<n; i++){
            if(count==0) ele = arr[i];
            count += (ele == arr[i])?1:-1;
        }
		count = 0;
		for(int i=0; i<n; i++){
			if(arr[i] == ele) count++;
		}
		if(count > n/2) return ele;
        return -1;
}