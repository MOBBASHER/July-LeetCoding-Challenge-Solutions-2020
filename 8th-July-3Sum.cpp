Problem:
Given an array nums of n integers, are there elements a, b, c in nums such that a + b + c = 0? Find all unique triplets in the array which gives the sum of zero.

Note:

The solution set must not contain duplicate triplets.

Example:

Given array nums = [-1, 0, 1, 2, -1, -4],

A solution set is:
[
  [-1, 0, 1],
  [-1, -1, 2]
]

--------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution:

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<vector<int>> ans;
        set<vector<int>>s;
        int n = arr.size();
        for (int i = 0; i < n - 2; i++)
        {
            int val = arr[i]; 
			int l = i + 1;  
			int r = n - 1; 
            while (l < r)
            {
                int csum = val + arr[l] + arr[r];
                if (csum == 0){
                    s.insert({val,arr[l++],arr[r--]}); 
                }
                else if (csum < 0) {l++; }
                else{ r--; }
            }
        }for(auto x: s){
            ans.push_back(x); }
        return ans;
    }
};
--------------------------------------------------------------------------------------------------------------------------------------------------------------------
Done by 
Md Mobbasher Ansari

313 / 313 test cases passed.
Status: Accepted
Runtime: 1972 ms (pretty bad)
Memory Usage: 128.4 MB (bad)

