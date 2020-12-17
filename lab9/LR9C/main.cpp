#include <iostream>
#include "staff.h"
using namespace std;

int main()
{
    srand(time(NULL));
    STAFF f;
    f.Insert("Gleb", 18);
    f.Insert("Ilya", 15);
    f.Insert("Pasha", 19);
    f.Insert("Dima", 17);
    f.Show("name");
    f.Show("age");
    f.Show();
    cout << "Name:" << f.Find("Gleb").get_name() << endl;
    cout << "Age:" << f.Find(18).get_age() << endl;
    return 0;
}
