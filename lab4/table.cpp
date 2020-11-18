#include "table.h"

Table::Table()
{
    this->data = new Transport[12];
    this->count = new int(12);
}

Table::Table(int *n)
{
    this->data = new Transport[*n];
    this->count = new int(*n);
}

void Table::delete_record()
{
    Transport *temp_data = new Transport[*count - 1];
    for(int *i = new int(0); *i < *count - 1; (*i)++)
        temp_data[*i] = data[*i];
    //delete[] data;
    data = new Transport[*count - 1];
    for(int *i = new int(0); *i < *count - 1; (*i)++)
        data[*i] = temp_data[*i];
    delete[] temp_data;
    (*count)--;
}

void Table::add_record(Transport *t)
{
    Transport *temp_data = new Transport[*count + 1];
    for(int *i = new int(0); *i < *count; (*i)++)
        temp_data[*i] = data[*i];
    temp_data[*count] = *t;
    //free(data);
    data = new Transport[*count + 1];
    for(int *i = new int(0); *i < *count + 1; (*i)++)
        data[*i] = temp_data[*i];
    delete[] temp_data;
    (*count)++;
}

void Table::show()
{
    for(int *i = new int(0); *i < *count; (*i)++)
    {
        cout << *i + 1 << ": ";
        data[*i].show();
    }
}

void Table::sort()
{
    for(int *i = new int(0); *i < *count; (*i)++)
    {
        for(int * j = new int(0); *j < *count - 1; (*j)++)
        {
            if(to_int(data[*j].route_id) > to_int(data[*j + 1].route_id))
            {
                Transport *temp = new Transport(data[*j]);
                data[*j] = data[*j + 1];
                data[*j + 1] = *temp;
            }
        }
    }
}

int* Table::GetCount()
{
    return count;
}

Table::~Table()
{
    delete[] data;
    delete count;
}

int Table::to_int(string *str)
{
    stringstream ss(*str);
    int *result = new int(0);
    ss >> *result;
    return *result;
}
