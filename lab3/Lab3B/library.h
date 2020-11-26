#ifndef LIBRARY_H
#define LIBRARY_H
#include "book.h"

class LIBRARY : public BOOK
{
public:
    LIBRARY();
    LIBRARY(string, string, int, int, bool);
    bool isExist(string);
    bool isAvailable();
    void takeBook();
    void returnBook();
private:
    int id;
    bool available;
};

#endif // LIBRARY_H
