#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val) {
        data = val;
        left = Null;
        right = Null;
    }
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    /*
         1
        / \
       2   3
    */
   root->left->left = new Node(5);
   root->right->right = new Node(6);

   return 0;
}