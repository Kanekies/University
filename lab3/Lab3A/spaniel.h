#ifndef SPANIEL_H
#define SPANIEL_H
#include "sobaka.h"
#include <string>
using namespace std;
class SPANIEL : virtual public SOBAKA
{
public:
    SPANIEL();
    SPANIEL(SOBAKA&, string);
    ~SPANIEL();
    virtual void show();
protected:
    string color;
};

#endif // SPANIEL_H
