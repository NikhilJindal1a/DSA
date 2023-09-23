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

node* insertinbst(node* root, int data) {
    if (root == NULL) {
        root = new node(data);
        return root;
    } else if (data > root->data) {
        root->right = insertinbst(root->right, data);
        return root;
    } else {
        root->left = insertinbst(root->left, data);
        return root;
    }
}

node* buildbst() {
    node* root = NULL;
    int data;
    cin >> data; // Input the first element //8

    while (data != -1) { // Continue until -1 is entered
        root = insertinbst(root, data);
        cin >> data; // Input the next element //3 10 17 -1
    }
    return root;
}

void levelwise(node* root) {
    if (root == NULL) {
        return;
    }
    
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

int main() {
    node* root = buildbst();
    cout << "Levelwise traversal:" << endl;
    levelwise(root); 
    return 0;
}

//8 
//3 10
//17