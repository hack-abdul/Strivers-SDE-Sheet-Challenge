#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> ans;
    ans.push_back(intervals[0]);

    int current = 0, next = 1, rows = intervals.size();
    while(next < rows){
        if(ans[current][1] >= intervals[next][0])
            ans[current][1] = max(ans[current][1], intervals[next++][1]);
        else{
            ans.push_back(intervals[next++]);
            current++;
        }
        
    }
    return ans;
}
