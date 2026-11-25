/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> a;
    void treeToVector(TreeNode* r){
        if(r==NULL){
            return;
        }
        treeToVector(r->left);
        a.push_back(r->val);
        treeToVector(r->right);
    }
    TreeNode* vectorToTree(vector<int> z){
        if(z.size()==0){
            return NULL;
        }
        if(z.size()==1){
            return new TreeNode(z[0]);
        }
        TreeNode* a = new TreeNode(z[z.size()/2]);
        vector<int> b;
        vector<int> c;
        for(int i=0;i<z.size();i++){
            if(i<z.size()/2){
                b.push_back(z[i]);
            }
            else if(i>z.size()/2){
                c.push_back(z[i]);
            }
        }
        a->left = vectorToTree(b);
        a->right = vectorToTree(c);
        
        return a;
    }
    TreeNode* balanceBST(TreeNode* r) {
        treeToVector(r);
        return vectorToTree(a);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna