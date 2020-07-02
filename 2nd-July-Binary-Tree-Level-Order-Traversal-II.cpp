Problem :
Given a binary tree, return the bottom-up level order traversal of its nodes' values. (ie, from left to right, level by level from leaf to root).

For example:
Given binary tree [3,9,20,null,null,15,7],

    3
   / \
  9  20
    /  \
   15   7
   
return its bottom-up level order traversal as: 

[
  [15,7],
  [9,20],
  [3]
]
-------------------------------------------------------------------------------------------------------------------------------------------------------------------

solution:

class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
      // for storing the results
      vector<vector<int>> ans;    
      TreeNode* temp;             //temporary node
      
      if(!root)       //checking whether root is null or not                 
          return ans;            
          
          queue<TreeNode*> q;    //creating queue for bfs algo
          q.push(root);          //push root value in queue. Now the queue contain root.
          while(!q.empty())      //looping while the queue is empty
          {
              
              int n = q.size(); //taking the size of queue at every iteration
             
              vector<int> v(n);  //making vector to be pushed into ans vector because we need vector of vector
              
              //push all the values of queue at each level into v vector at its i'th position
              for(int i=0;i<n;i++) 
              {
                  temp = q.front();
                  v[i]=temp->val;
                  q.pop();
                  if(temp->left)         //checking for its left child
                    q.push(temp->left);
                    
                  if(temp->right)        //checking for its right child
                    q.push(temp->right);
 
              }
               ans.push_back(v);   //pushing v vector in ans vector to make it vector of vectors
            }
          
        reverse(ans.begin(),ans.end());   // reversing the ans vector because we need to print the level order traversal in reverse mannner.
        return ans; //returning the ans vector
    }
};
------------------------------------------------------------------------------------------------------------------------------------------------------------------
Done by 
Md Mobbasher Ansari

34 / 34 test cases passed.
Status: Accepted
Runtime: 16 ms
Memory Usage: 12.5 MB
