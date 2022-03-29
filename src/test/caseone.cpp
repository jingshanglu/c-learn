#include "test/tree.h"
#include "test/caseone.h"

void test() {
    Tree child1 = Tree(1, nullptr, nullptr);
    Tree child2 = Tree(2, nullptr, nullptr);
    Tree child3 = Tree(3, nullptr, nullptr);
    Tree child4 = Tree(4, nullptr, nullptr);

    Tree tmp1 = Tree(5, &child1, &child2);
    Tree tmp2 = Tree(6, &child3, &child4);

    Tree root = Tree(7, &tmp1, &tmp2);
    vector<int> res;

    root.innerOrderScan(&res);
    // innerScan(&root, res);
    for (size_t i = 0; i < res.size(); i++)
    {
        printf("%d \n", res[i]);
    }
    
    printf("hello world.\n");
}