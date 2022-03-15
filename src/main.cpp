// #include <iostream>
#include <stdio.h>
#include "tree.h"

// typedef struct node
// {
//     int val;
//     node* left;
//     node* right;
// }Node;

// void innerScan(Node* root, vector<int> &res) {
//     if (root->left)
//     {
//         innerScan(root->left, res);
//     }
//     res.push_back(root->val);
//     if (root->right)
//     {
//         innerScan(root->right, res);
//     }
    
    
// }


int main(int argc, char const *argv[])
{
    /* code */
    // cout <<  "hello world !!" << endl;

    Tree *tleft = new Tree();
    Tree *tright = new Tree();
    Tree *left = new Tree(0, tleft, tright);
    Tree *right = new Tree(2, tleft, tright);
    Tree *root = new Tree(1, left, right);
    vector<int> res;

    root->innerOrderScan(&res);
    delete root;
    // innerScan(&root, res);
    for (size_t i = 0; i < res.size(); i++)
    {
        printf("%d \n", res[i]);
    }
    
    printf("hello world.\n");
    return 0;
}


