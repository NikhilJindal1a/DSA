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

class p{
    public: 
    int hei;
    int dia;
    p(){
        hei=0;
        dia=0;
    }
};

p fastdiameter(node*root){
    p n;
    //base case
    if(root==NULL){
        return n;
    }
    //rec case
    p x = fastdiameter(root->left);
    p y = fastdiameter(root->right);
    n.hei=max(x.hei,y.hei)+1;

    int op1=x.dia;
    int op2=y.dia;
    int op3=x.hei+y.hei;
    n.dia=max(op1,max(op2,op3));
    return n;    
}

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

int main() {
    node* root = buildtree();
    p a=fastdiameter(root);
    cout<<"height is "<<a.hei<<endl;//4
    cout<<"dia is "<<a.dia<<endl;//6
}

