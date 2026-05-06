#include<iostream>
using namespace std;

struct Node {
int data;
Node* left;
Node* right;

Node(int value) { 
data = value;
left = right = NULL;
}
};
Node* insert(Node* root, int value) {
if (root == NULL)
return new Node(value);
if (value < root->data)
root->left = insert(root->left, value);
else
root->right = insert(root->right, value);
return root;
}

void inorder(Node* root) {
if(root=NULL)
return;
inorder(root->left);
cout << root->data << " ";
inorder(root->right);
}

void preorder(Node* root) {
if (root == NULL) return;
cout << root->data << " ";
preorder(root->left);
preorder(root->right);
}

void postorder(Node* root) {
if (root == NULL)
return;
postorder(root->left);
postorder(root->right);
cout << root->data << " ";
}



int main() {
Node* root = NULL;
int choice;

do {
cout << "\n  BST MENU  \n";
cout << "1. Create Tree\n";
cout << "2. Traversal\n";

cout << "3. Exit\n";
cout << "Enter choice: ";
cin >> choice;

switch (choice) {
case 1: {
int n, value;
cout << "Enter number of nodes: ";
cin >> n;

root = NULL; m,
cout << "Enter elements:\n";
for (int i = 0; i < n; i++) {
cin >> value;
root = insert(root, value);
}
cout << "Tree created successfully!\n";
break;
}

case 2: {
if (root == NULL) {
cout << "Tree is empty!\n";
break;
}

int t;
cout << "\nChoose traversal:\n";
cout << "1. Inorder\n2. Preorder\n3. Postorder\n";
cin >> t;

cout << "Result: ";
if (t == 1)
inorder(root);
else if (t == 2)
preorder(root);
else if (t == 3)
postorder(root);
else
cout << "Invalid choice";
cout << endl;
break;
}




case 3:
cout << "Exiting program...\n";
break;
default:
cout << "Invalid choice!\n";
}
} while (choice != 4);
return 0;
}


































