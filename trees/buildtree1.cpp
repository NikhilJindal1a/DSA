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

int preIndex = 0; // Add this global variable to keep track of the index in the preo array.

node* buildtreeusinginpre(int s, int e, int ino[], int preo[]) {
    if(s > e){
        return NULL;
    }
    int data = preo[preIndex++]; // Increment the preIndex here to get the next element.
    node* root = new node(data);
    
    int k;
    for(int j = s; j <= e; j++){
        if(ino[j] == data){
            k = j;
            break;
        }
    }
    root->left = buildtreeusinginpre(s, k - 1, ino, preo);
    root->right = buildtreeusinginpre(k + 1, e, ino, preo);
    return root;
}

void preorder(node* root) {
    if (root == NULL) {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(node* root) {
    if (root == NULL) {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void levelwise(node* root){
    queue<node*> q;
    q.push(root);
    
    while (!q.empty()) {
        int n = q.size();
        for (int i = 0; i < n; i++) {
            node* x = q.front();
            q.pop();

            cout << x->data << " ";

            if (x->left != NULL) {
                q.push(x->left);
            }
            if (x->right != NULL) {
                q.push(x->right);
            }
        }
        cout << endl;
    }
}

int ino[] = {1, 10, 4, 6, 7, 8, 3, 13, 14};
int preo[] = {8, 10, 1, 6, 4, 7, 3, 14, 13};

int main(){
    int n = sizeof(preo) / sizeof(int);
    node* root = buildtreeusinginpre(0, n - 1, ino, preo);
    
    cout << "Inorder traversal: ";
    inorder(root);
    cout << endl;

    cout << "Preorder traversal: ";
    preorder(root);
    cout << endl;

    cout << "Levelwise traversal:" << endl;
    levelwise(root);

    return 0;
}

//8 
//10 3 
//1 6 14
//4 7 13
