#include <bits/stdc++.h>
#include <cmath>

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long int>> finalAns;
  int rows = n;
  for(int i=1; i<=rows; i++){
    long long int ans = 1;
    int cols = i;
    vector<long long int> temp;
    temp.push_back(ans);
      for(int j=1; j<cols; j++){
      ans = (ans * (i-j))/ j;
      temp.push_back(ans);
      }
    
    
    finalAns.push_back(temp);
    
  }
  return finalAns;
}
