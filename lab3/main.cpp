#include"human.h"
#include"human.cpp"
#include"basketballer.h"
#include"basketballer.cpp"
#include"prof_footballer.h"
#include"prof_footballer.cpp"
#include"prof_basketballer.h"
#include"prof_basketballer.cpp"
#include"employee.h"
#include"employee.cpp"
#include <sstream>
int main()
{
    Human *h = new Human("Gleb", "Semyatichko", "Eduardovich");
    Employee *e = new Employee("Gleb", "Semyatichko", "Eduardovich", 1000000, 1);
    Footballer *f = new Footballer("Gleb", "Semyatichko", "Eduardovich", 44);
    Basketballer *b = new Basketballer("Gleb", "Semyatichko", "Eduardovich", 201);
    Prof_Footballer *pf = new Prof_Footballer("Gleb", "Semyatichko", "Eduardovich", 45, 2000000, 2, "LW", 6);
    Prof_Basketballer* pb = new Prof_Basketballer("Gleb", "Semyatichko", "Eduardovich", 45, 2000000, 2, "Sniper", "LA_Lakers");
    h->show();
    cout << endl;
    e->show();
    cout << endl;
    f->show();
    cout << endl;
    b->show();
    cout << endl;
    pf->show();
    cout << endl;
    pb->show();
    return 0;
}
