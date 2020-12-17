#include "vvod.h"

vvod::vvod() { }

int vvod::CompareTo(string type, string value) {
    int result = 0;
    if(type == "number") {
        for(int i = 0; i < value.length(); i++)
            if(value[i] < 46 || value[i] > 57) //от 46, потому что '.' и '/' может входить в формат числа
                result++;
    }
    else if(type == "login") {
        if(value.length() < 6)
            result += 6 - value.length();
        for(int i = 0; i < value.length(); i++)
            if(value[i] < 65 || value[i] > 122 || (value[i] >= 91 && value[i] <= 96))
                result++;
    }
    else if(type == "password") {
        if(value.length() < 8)
            result += 8 - value.length();
        for(int i = 0; i < value.length(); i++)
            if(value[i] < 48 || value[i] > 57)
                if(value[i] < 65 || value[i] > 122)
                    result++;
    }
    return result;
}

