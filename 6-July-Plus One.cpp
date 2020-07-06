Problem:
Given a non-empty array of digits representing a non-negative integer, plus one to the integer.

The digits are stored such that the most significant digit is at the head of the list, and each element in the array contain a single digit.

You may assume the integer does not contain any leading zero, except the number 0 itself.

Example 1:

Input: [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.

Example 2:

Input: [4,3,2,1]
Output: [4,3,2,2]
Explanation: The array represents the integer 4321.

-------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution:

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();109 / 109 test cases passed.
	Status: Accepted
Runtime: 0 ms
Memory Usage: 8.7 MB
        digits[n-1]+=1;
        if(digits[n-1]<=9)
        {
            return digits;
        }
        for(int i=n-1;i>0;i--)
        {
            if(digits[i]>9)
            {
                digits[i]=0;
                digits[i-1]+=1;
                
            }
            else
                break;
        }
        if(digits[0]==10)
        {
            digits[0]=0;
            digits.insert(digits.begin(),1);
        }
        
        return digits;
    }
};
--------------------------------------------------------------------------------------------------------------------------------------------------------------------
Done By
Md Mobbasher Ansari
109 / 109 test cases passed.
Status: Accepted
Runtime: 0 ms
Memory Usage: 8.7 MB
