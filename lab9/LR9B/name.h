#ifndef NAME_H
#define NAME_H
#include <string>

class NAME {
private:
    std::string value;
public:
    NAME() {
        value = "";
    }

    NAME(std::string value) {
        this->value = value;
    }

    char charByIndex(int index) {
        if(index >= 0 && index < (int)value.length())
            return value[index];
        throw -1;
    }

    bool operator< (const NAME& n1) const {
        return n1.value > this->value;
    }

    std::string get() {
        return value;
    }
};

#endif // NAME_H
