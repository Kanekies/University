#include <iostream>
#include "vuz.h"
using namespace std;

int main()
{
    //создание объекта класса "VUZ"
    VUZ KhPI;

    //создание объектов классов-наследников от абстрактного класса "Persona"
    Prepod prepod1("Kozub S.N.", 36, "Chemistry", 1);
    Prepod prepod2("Grankina S.S.", 44, "Chemistry", 2);
    Student student1("Kubariev I.O.", 17, new int[5]{2, 5, 5, 5, 5});
    Student student2("Semyatichko Gleb", 18, new int[5]{5, 4, 5, 5, 5});
    Student student3("Alexeyev P.O.", 19, new int[5]{2, 2, 2, 2, 2});
    Zav_kaf zav_kaf("Syrova G.O.", 55, "Zav_kaf");

    //добавление в "KhPI.Shtat" объектов классов-наследников
    KhPI.add(&prepod1);
    KhPI.add(&prepod2);
    KhPI.add(&student1);
    KhPI.add(&student2);
    KhPI.add(&student3);
    KhPI.add(&zav_kaf);

    //вывод
    KhPI.show();

    return 0;
}
