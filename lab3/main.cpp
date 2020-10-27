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
    Human *h = new Human("Ilya", "Kubariev", "Aleksandrovich");
    Employee *e = new Employee("Ilya", "Kubariev", "Aleksandrovich", 1000000, 1);
    Footballer *f = new Footballer("Ilya", "Kubariev", "Aleksandrovich", 44);
    Basketballer *b = new Basketballer("Ilya", "Kubariev", "Aleksandrovich", 201);
    Prof_Footballer *pf = new Prof_Footballer("Ilya", "Kubariev", "Aleksandrovich", 45, 2000000, 2, "LW", 6);
    Prof_Basketballer* pb = new Prof_Basketballer("Ilya", "Kubariev", "Aleksandrovich", 45, 2000000, 2, "Sniper", "LA_Lakers");
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
