/*
// Definition for a QuadTree node.
class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;
    
    Node() {
        val = false;
        isLeaf = false;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};
*/

class Solution {
public:
    Node* doit(vector<vector<int>> grid, int n , int x , int y){
        bool t = true;
        int i = x;
        while(i<x+n-1 && t){
            int j = y;
            while(j<y+n-1 && t){
                if(grid[i][j] != grid[i][j+1] || grid[i][j] != grid[i+1][j]){
                    t = false;
                }
                else{
                    j++;
                }
            }
            i++;
        }
        Node* root;
        if(t){
            root = new Node(grid[x][y] , true);
            return root;
        }
        else{
            root = new Node(1,false);
            root->topLeft = doit(grid,n/2,x,y);
            root->topRight = doit(grid,n/2,x,y+(n/2));
            root->bottomLeft = doit(grid,n/2,x+(n/2),y);
            root->bottomRight = doit(grid,n/2,x+(n/2),y+(n/2));
            return root;
        }
    }
    Node* construct(vector<vector<int>>& grid) {
        int n = grid[0].size();
        return doit(grid,n,0,0);
    }
};
