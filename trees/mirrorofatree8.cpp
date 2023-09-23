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

void mirror(node *root){
    //base case
    if(root==NULL){
        return;
    }
    //rec case
    swap(root->left,root->right);
    mirror(root->left);
    mirror(root->right);
}

void preorder(node* root) {
    if (root == NULL) {
        return;
    }
    cout << root->data << " "; //8 3 14 13 10 6 7 4 1
    preorder(root->left);
    preorder(root->right);
}

int main() {
    node* root = buildtree();
    mirror(root);
    preorder(root);
    cout<<endl;
    return 0;
}

