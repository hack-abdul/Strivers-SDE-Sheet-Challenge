#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long int sum = 0, ans = 0;
    int size = n;
    for(int i=0; i<size; i++){
        sum += arr[i];
        // this will store the maximum ans till point and we don't have
        // to take care about the upcoming negative elements
        ans = max(ans, sum);
        // check whether the current element was faulty i.e. 
        // excessively negative
        if(sum < 0) sum = 0;
    }
    return ans;
}