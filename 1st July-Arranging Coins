You have a total of n coins that you want to form in a staircase shape, where every k-th row must have exactly k coins.

Given n, find the total number of full staircase rows that can be formed.

n is a non-negative integer and fits within the range of a 32-bit signed integer.

Example 1: 
n = 5

The coins can form the following rows:
¤
¤ ¤
¤ ¤

Because the 3rd row is incomplete, we return 2.

Example 2:

n = 8

The coins can form the following rows:
¤
¤ ¤
¤ ¤ ¤
¤ ¤

Because the 4th row is incomplete, we return 3.
-------------------------------------------------------------------------------------------------------------------------------------------------------------------
solution:

class Solution {
public:
    int arrangeCoins(int n) {
        long sum = 0;  // for sum
        int level = 0; // for each level
        for(int i=n-1;i>=0;i--)
        {
          sum+=long(n-i);    // if n = 5 then n-i will be 1 and added to sum
            
            if(sum<=n)       // checking if the sum is less than equal to n.If true increse the value of level
            {
                level++;
            }
            else 
                break;       // else sum exceeded the n.
        }
        return level;         //return the value to the function
        
    }
}
-------------------------------------------------------------------------------------------------------------------------------------------------------------------
1336 / 1336 test cases passed.
Status: Accepted
Runtime: 8 ms
Memory Usage: 5.9 MB
//---Md Mobbasher Ansari
