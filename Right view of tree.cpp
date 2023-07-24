class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    void levelorder(vector<vector<int>>&dp,Node *root,int l)
    {
        if(root==NULL)return;
        if(dp.size()==l)dp.push_back({root->data});
        else
        {
            dp[l].push_back(root->data);
        }
        levelorder(dp,root->left,l+1);
        levelorder(dp,root->right,l+1);
    }
    vector<int> rightView(Node *root)
    {
        vector<vector<int>>dp;
        int l=0;
        levelorder(dp,root,l);
        vector<int>res;
        for(auto it:dp)
        {
            res.push_back(it[it.size()-1]);
            
        }
        return res;
        
    }
};
