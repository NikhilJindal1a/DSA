#include<iostream>
#include<queue>
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

void levelwise(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    
    //loop
    while (!q.empty()) {
    node* x = q.front();
    q.pop();

    if (x == NULL) {
        cout << endl;
        if (!q.empty()) {
            q.push(NULL);
        }
    } else {
        cout << x->data << " ";
        if (x->left != NULL) {
            q.push(x->left);
        }
        if (x->right != NULL) {
            q.push(x->right);
        }
    }
}
}

int main() {
    node* root = buildtree();
    levelwise(root);
    return 0;
}

//8
//10 3
//1 6 14
//4 7 13