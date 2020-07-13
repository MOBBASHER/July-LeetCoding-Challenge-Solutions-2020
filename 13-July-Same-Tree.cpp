Problem :

Given two binary trees, write a function to check if they are the same or not.

Two binary trees are considered the same if they are structurally identical and the nodes have the same value.

Example 1:

Input:     1         1
          / \       / \
         2   3     2   3

        [1,2,3],   [1,2,3]

Output: true

Example 2:

Input:     1         1
          /           \
         2             2

        [1,2],     [1,null,2]

Output: false

Example 3:

Input:     1         1
          / \       / \
         2   1     1   2

        [1,2,1],   [1,1,2]

Output: false
-------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution:

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL&&q==NULL)
        {
            return true;
        }
        if(p!=NULL&&q!=NULL)
        {return ((p->val==q->val)&&isSameTree(p->left,q->left)&&isSameTree(p->right,q->right));}
     return false;   
    }
};
--------------------------------------------------------------------------------------------------------------------------------------------------------------------
Done By
Md Mobbasher Ansari

57 / 57 test cases passed.
Status: Accepted
Runtime: 0 ms
Memory Usage: 9.9 MB

