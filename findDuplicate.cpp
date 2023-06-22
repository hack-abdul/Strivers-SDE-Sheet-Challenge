#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	// vector<int> arr2 = arr;
	// while(1){
	// 	int ele = arr2[0];
	// 	if(arr2[ele] == ele) return ele;
	// 	else swap(arr2[0], arr2[ele]);
	// }

	// set both the pointers at the starting position
	int slow = arr[0], fast = arr[0];
	// Now move both of them in the virtual cycle,
	// slow moves by one and fast moves by two points,
	// until they meet at a single point.
	do{
		slow = arr[slow];
		fast = arr[arr[fast]];
	}while(slow != fast);

	// since we have found that particular point,
	// now reset fast to the starting position and
	// move both of them by one point in the virtual cycle
	fast = arr[0];
	while(slow != fast){
		slow = arr[slow];
		fast = arr[fast];
	}
	// when both of them meet at a single point, that is the duplicate
	// element, either return fast or slow.
	return fast;
}
