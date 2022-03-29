#include "test/caseone.h"
#include <iostream>

int a = 10;

int func(int t) {
    std::cout << "t: " << t << "address: " << &t << std::endl;
    int l = 10;
    return l;
};

int main(int argc, char const *argv[])
{
    // Book b("c++");
    // Book tb = std::move(b);
    // std::cout << "old b name is " << b.get_name() << " count is " << b.get_mCount();
    // std::cout << "\ntb name is " << tb.get_name() << " count is " << tb.get_mCount();
    // std::cout << "\ntb name is ";

    test();
    return 0;
}


