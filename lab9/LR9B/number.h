#ifndef NUMBER_H
#define NUMBER_H
#include <string>


class NUMBER
{
private:
    std::string value;
public:
    NUMBER() {
        value = "";
    }

    NUMBER(std::string value) {
        this->value = value;
    }

    std::string get() {
        return value;
    }
};

#endif // NUMBER_H
