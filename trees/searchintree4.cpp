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

bool searchinatree(node*root, int key){
    //base case
    if(root==NULL){
        return false;
    }
    //rec case
    if(root->data==key||searchinatree(root->left,key)||searchinatree(root->right,key)){
        return true;
    }
    return false;
}

int main() {
    node* root = buildtree();
    int key;
    cin>>key;
    if(searchinatree(root,key)==true){
        cout<<"key is present"<<endl;//3
    }
    else{
        cout<<"Key is not present"<<endl;//9
    }
    return 0;
}

