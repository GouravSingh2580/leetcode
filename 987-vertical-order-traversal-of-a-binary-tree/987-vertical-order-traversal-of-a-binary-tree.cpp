
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map < int, map< int, vector<int> > > nodes;
        queue <pair < TreeNode *, pair < int, int  > > > q;
        vector <vector<int>> res;
        
        if(root == NULL)
            return res;
        
        q.push(make_pair(root, make_pair(0,0)));
        
        while(!q.empty()){
            auto temp = q.front();
            q.pop();
            
            TreeNode* frontNode = temp.first;
            int hd = temp.second.first;
            int lvl = temp.second.second;
            
            nodes[hd][lvl].push_back(frontNode -> val);
            
            if(frontNode -> left)
                    q.push(make_pair(frontNode->left, make_pair(hd-1, lvl+1)));
            
            if(frontNode->right)
                    q.push(make_pair(frontNode->right, make_pair(hd+1, lvl+1)));
        }
        
        
        for(auto i : nodes){
            vector<int> ans;
            for(auto j : i.second){ 
                sort(j.second.begin(), j.second.end());
                for(auto k : j.second)
                {
                    ans.push_back(k);
                 }  
            } 
            //ans.erase(ans.begin(),ans.end());
            res.push_back(ans);
        }
        return res;
    }
};