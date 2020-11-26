#include "stringbuilder.h"

StringBuilder::StringBuilder(){
    this->text = "";
}

StringBuilder::StringBuilder(string text){
    this->text = text;
}

string StringBuilder::_show(){
    string result = "";
    for(int i = 0; i < (int)this->text.length(); i++)
        if((int)text[i] < 48 || (int)text[i] > 57)
            if((int)text[i] < 65 || (int)text[i] > 90)
                result+=this->text[i];
    return result;
}

void StringBuilder::show(){
    cout << this->_show() << endl;
}

ostream& operator<<(ostream &out, StringBuilder &string_builder){
    out << string_builder._show();
    return out;
}
