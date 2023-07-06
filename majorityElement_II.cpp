class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int num1 = INT_MIN, num2 = INT_MIN, count1 = 0, count2 = 0, size = nums.size(), countNum1 = 0, countNum2 = 0;
        vector<int> ans;
        for(auto i:nums){
            if(i == num1) count1++;
            else if(i == num2) count2++;
            else if(count1 == 0){ num1 = i; count1++;}
            else if(count2 == 0){ num2 = i; count2++;}
            else {
                count1--; count2--;
            }
        }
        for(auto i:nums){
            if(i == num1) countNum1++;
            else if(i == num2) countNum2++;
        }
        if(countNum1 > size/3) ans.push_back(num1);
        if(countNum2 > size/3) ans.push_back(num2);
        return ans;
    }
};