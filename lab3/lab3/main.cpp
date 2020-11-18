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
    Human h("Gleb", "Semyatichko", "Eduardovich");
    Employee e ("Gleb", "Semyatichko", "Eduardovich", 1000000, 1);
    Footballer f("Gleb", "Semyatichko", "Eduardovich", 44);
    Basketballer b("Gleb", "Semyatichko", "Eduardovich", 201);
    Prof_Footballer pf("Gleb", "Semyatichko", "Eduardovich", 45, 2000000, 2, "LW", 6);
    Prof_Basketballer pb ("Gleb", "Semyatichko", "Eduardovich", 45, 2000000, 2, "Sniper", "LA_Lakers");
    h.show();
    cout << endl;
    e.show();
    cout << endl;
    f.show();
    cout << endl;
    b.show();
    cout << endl;
    pf.show();
    cout << endl;
    pb.show();
    return 0;
}
