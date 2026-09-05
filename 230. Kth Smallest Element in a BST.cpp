
     #include<iostream>
    #include<vector>
    using namespace std;

    struct TreeNode{
      int val;
      TreeNode* left;
      TreeNode* right;
       TreeNode(int x){
         val=x;
         left=nullptr;
         right=nullptr;
       }
    };

    TreeNode* insert(TreeNode* root, int value){
        if(root==nullptr){
            return new TreeNode(value);
        }
        if(value<root->val){
            root->left=insert(root->left,value);
        }else{
            root->right=insert(root->right,value);
        }
        return root;
    }

class Solution {
public:

      int solve(TreeNode* root, int k, int  &count){
           if(root==nullptr){
            return -1;
        }
      
        int left= solve(root->left,k,count);
           if(left!=-1){
            return left;
           }
          count++;
          if(k==count){
            return root->val;
        }
        return solve(root->right,k,count);
      }

    int kthSmallest(TreeNode* root, int k) {
        int count=0;
     return solve(root,k,count);

    }
};

  int main(){
        Solution obj;
        TreeNode* root=nullptr;
        int n;
        cout<<"Enter number of nodes";
        cin>>n;
        cout<<"Enter BST values";

        for(int i=0; i<n; i++){
            int value;
            cin>>value;
            root=insert(root,value);
        }
        int k;

       cout << "Enter k: ";
       cin >> k;

        int answer = obj.kthSmallest(root, k);

    cout << k << "th smallest element is: " << answer << endl;


        return 0;
    }