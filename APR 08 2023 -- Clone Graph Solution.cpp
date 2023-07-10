
class Solution {
public:
    unordered_map<Node*,Node*> m;
    Node* cloneGraph(Node* node) {
        if(node == NULL) return NULL;
        if(m.find(node) == m.end()){
            m[node] = new Node(node->val);
            for(int i = 0; i<node->neighbors.size(); i++){
                m[node]->neighbors.push_back(cloneGraph(node->neighbors[i]));
            }
        }
        return m[node];
    }
};
