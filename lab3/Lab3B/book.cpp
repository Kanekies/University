#include "book.h"

BOOK::BOOK(){
    this->name = "";
    this->author = "";
    this->number_of_pages = 0;
}

BOOK::BOOK(string name, string author, int number_of_pages){
    this->name = name;
    this->author = author;
    this->number_of_pages = number_of_pages;
}
