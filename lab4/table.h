#include "transport.h"
#include <sstream>
#ifndef TABLE_H
#define TABLE_H


class Table
{
public:
    Transport *data;

    Table();
    Table(int *n);
    void delete_record();
    void add_record(Transport *t);
    void show();
    void sort();
    int* GetCount();
    ~Table();
private:
    int *count;

    int to_int(string *str);
};

#endif // TABLE_H
