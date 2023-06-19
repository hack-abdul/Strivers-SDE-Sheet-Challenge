#include <bits/stdc++.h> 

void reverseArray(vector<int> &arr, int index, int size){
    int start = index, end = size;
    while(start <= end){
        swap( arr[start++], arr[end--] );
    }
    return;
}

vector<int> nextPermutation(vector<int> &arr, int n)
{
    //  Write your code here.
    // start a loop from the back to check whether the given number
    // is in proper ascending order
    int size = n - 1;
    int reqIndex = -1;
    for(int i=size; i>=1; i--){
        // this statement evalutes true when the ascending 
        // sequence from back side is broken
        if(!(arr[i] < arr[i-1])){
            reqIndex = i-1;
            int painPointElement = arr[i-1];
            // Now we have to properly swap our element from the latter part
            // of the sorted array
            // we have to find the element which is just greater than our index Element
            int swapIndex = size;
            for(int j=reqIndex+1; j<=size; j++){
                if(arr[j] < painPointElement){
                    swapIndex = j-1;
                    break;
                }
            }
            swap(arr[swapIndex], arr[reqIndex]);
            break;
        }
    }
    
    reverseArray(arr, reqIndex+1, size);
    return arr;
}