// #ifndef TREE_H
// #define TREE_H
#pragma
#include <stdio.h>
#include <vector>
using namespace std;

class Tree
{
private:
    int val;
    Tree* left;
    Tree* right;
public:
    Tree(){};
    Tree(int v);
    Tree(int v, Tree* l, Tree* r);
    ~Tree();
    void innerOrderScan(vector<int> *res);
};

// #endif
