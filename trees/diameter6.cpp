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

int heightofatree(node* root){
    //base case
    if(root==NULL){
        return 0;
    }
    //rec case
    return max(heightofatree(root->left),heightofatree(root->right))+1;
}

int diameter(node* root){
    //base case
    if(root==NULL){
        return 0;
    }
    //rec case
    int op1=diameter(root->left);//3
    int op2=diameter(root->right);//2
    int op3=heightofatree(root->left)+heightofatree(root->right);
    return max(op1,max(op2,op3));
}

int main() {
    node* root = buildtree();
    cout<<diameter(root)<<endl;//6
    return 0;
}

