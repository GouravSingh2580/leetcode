/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    // int k=0;
    int maxDepth(Node* root) {
        if(root==NULL){
            return 0;
        }
        int k=0;
        for(auto c:root->children){
            k=max(k,maxDepth(c));
        }
        return k+1;
    }
};