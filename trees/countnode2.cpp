#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;
    node(int d) {
        data = d;
        left = NULL;
        right = NULL;
    }
};

node* buildtree() {
    int d;
    cin >> d; // Input: 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
    if (d == -1) {
        return NULL;
    }
    else {
        node* root = new node(d);
        root->left = buildtree(); // lst 
        root->right = buildtree(); // rst 
        return root;
    }
}

int countnode(node*root){
    //base case
    if(root==NULL){
         return 0;
    }
    //rec case
    return countnode(root->left)+countnode(root->right)+1;
}
int main() {
    node* root = buildtree();
    cout<<countnode(root);//9
    return 0;
}
