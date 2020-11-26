#include "library.h"

LIBRARY::LIBRARY():BOOK(){
    this->id = -1;
    this->available = false;
}

LIBRARY::LIBRARY(string name, string author, int number_of_pages, int id, bool available) : BOOK(name, author, number_of_pages){
    this->id = id;
    this->available = available;
}

bool LIBRARY::isExist(string name){
    return this->name == name;
}

bool LIBRARY::isAvailable(){
    return available;
}

void LIBRARY::takeBook(){
    available = false;
}

void LIBRARY::returnBook(){
    available = true;
}
