#ifndef BOOK_H
#define BOOK_H
#include <string>
using namespace std;

class BOOK
{
protected:
    BOOK();
    BOOK(string, string, int);

    string name;
    string author;
    int number_of_pages;
};

#endif // BOOK_H
