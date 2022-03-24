#pragma
#include <iostream>

class Book
{
private:
    std::string iName;
    int mCount;
public:
    Book(std::string iName);
    Book(Book &&ibook);
    ~Book();

    std::string &get_name();
    int get_mCount();
};

Book::Book(std::string iName)
{
    this->iName = iName;
    mCount = 1;
};

Book::~Book()
{
    // delete &(this->iName);
};

Book::Book(Book&& iBook)
{
    this->iName = iBook.iName;
    mCount = 3;
};

std::string& Book::get_name() {
    return iName;
};

int Book::get_mCount()
{
    return mCount;
};



