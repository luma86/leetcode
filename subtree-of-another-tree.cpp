/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
bool ismatch(TreeNode* s, TreeNode* t, int match){
     
        if(!s&&!t)
        return true;
        else if(!s&&t||s&&!t)
        return false;
        
        if(!s->right&&!t->right&&!s->left&&!t->left)
        {
        if(s->val==t->val)
        return true;
        else
        return false;
        }
        
        if(s->val==t->val)
        return ismatch(s->left,t->left,1)&&ismatch(s->right,t->right,1)||ismatch(s->left,t,0)||ismatch(s->right,t,0);
        else if(match==0)
        return ismatch(s->left,t,0)||ismatch(s->right,t,0);


        return false;

}

    bool isSubtree(TreeNode* s, TreeNode* t) {

  
        return ismatch(s,t,0);
    

    }
};
