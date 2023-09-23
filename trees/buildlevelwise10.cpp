#include <iostream>
#include <queue>
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

node* buildlevelwise() {
    node* root = NULL;
    cout << "Enter the data of root: " << endl;
    int data;
    cin >> data;//8
    queue<node*> q;
    root = new node(data);
    q.push(root);
    while (!q.empty()) {
        node* x = q.front(); // Current node
        q.pop();
        cout << "Enter the left and right children of " << x->data << ": "; //3 10 1 6 -1 14 -1 -1 4 7 13 -1 -1 -1 -1 -1 -1 -1
        int le, ri;
        cin >> le >> ri;
        if (le != -1) {
            x->left = new node(le);
            q.push(x->left);
        }
        if (ri != -1) {
            x->right = new node(ri);
            q.push(x->right);
        }
    }
    return root;
}

void levelwise(node* root) {
    if (root == NULL)
        return;

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
    node* root = buildlevelwise();
    levelwise(root);
    return 0;
}

//8
//3 10
//1 6 14
//4 7 13