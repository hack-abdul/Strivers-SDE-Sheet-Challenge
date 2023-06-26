#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int merge(int arr[], int s, int e){
    int cnt = 0, mid = (s+e)/2, ind = s, ptr1 = 0, ptr2 = 0;

    // create copy arrays
    int len1 = mid - s + 1;
    int len2 = e - mid;
    int *left = new int[len1];
    int *right = new int[len2];

    for(int i=0; i<len1; i++){ left[i] = arr[ind++];}
    ind = mid + 1;
    for(int i=0; i<len2; i++){ right[i] = arr[ind++];}
    
    // merge two sorted arrays and update cnt
    ind = s;
    while(ptr1 < len1 && ptr2 < len2){
        if(left[ptr1] <= right[ptr2]){
            arr[ind++] = left[ptr1++];
        } else {
            arr[ind++] = right[ptr2++];
            cnt += len1 - ptr1;
        }
    }

    while(ptr1 < len1){
        arr[ind++] = left[ptr1++];
    }

    while(ptr2 < len2){
        arr[ind++] = right[ptr2++];
    }

    return cnt;
}

int inversionSort(int arr[], int s, int e){
    int cnt = 0, mid = (s+e)/2;
    // base case
    if(s >= e) return cnt;

    // left call
    cnt += inversionSort(arr, s, mid);
    // right call
    cnt += inversionSort(arr, mid+1, e);

    cnt += merge(arr, s, e);

    return cnt;
}

int main(){
    int size = 5;
    int arr[size] = {5,4,3,2,1};
    int ans = inversionSort(arr, 0, size - 1);
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    
    
    cout << endl << ans << endl;
    return 1;
}