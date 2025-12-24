#include<iostream>
 // Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 //方法一
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==nullptr){
            return 0;
        }
        int leftmax=maxDepth(root->left);
        int rightmax=maxDepth(root->right);

        return 1+std::max(leftmax,rightmax);
    }
};
//方法二
class Solution2{
public:
   int res=0;
   int depth=0;

   int MaxDepth(TreeNode *root){
    traverse(root);
    return res;
   }

   void traverse(TreeNode *root){
    if(root==nullptr)return;
    depth++;
    if(root->left==nullptr&&root->right==nullptr){
        res=std::max(depth,res);
    }

    traverse(root->left);
    traverse(root->right);
    //当某个节点遍历完它的左右子树后，他要回去，此时depth不能累加，因此要--
    depth--;


   }
};