#ifndef TREEH
#define TREEH
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

Tree::Tree(int v) {
    val = v;
    left = NULL;
    right = NULL;
};

Tree::Tree(int v, Tree* l, Tree* r)
{
    val = v;
    left = l;
    right = r;
};

Tree::~Tree()
{};

void Tree::innerOrderScan(vector<int> *res)
{
    if (left != NULL)
    {
        left->innerOrderScan(res);
    }
    res->push_back(val);
    if (right != NULL)
    {
        right->innerOrderScan(res);
    }
}


#endif