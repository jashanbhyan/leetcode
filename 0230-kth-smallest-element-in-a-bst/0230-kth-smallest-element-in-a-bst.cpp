class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        int ans=-1;
        if(!root) return ans;

        while(root){
            if(!root->left){
                k--;
                if(k==0) ans=root->val;
                root=root->right; 
            }
            else{
                TreeNode* prev=root->left;
                while(prev->right && prev->right!=root){
                    prev=prev->right;
                }
                if(prev->right==NULL){
                    prev->right=root;
                    root=root->left;
                }
                else{
                    prev->right=NULL;
                    k--;
                    if(k==0) ans=root->val;
                    root=root->right;
                }
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna