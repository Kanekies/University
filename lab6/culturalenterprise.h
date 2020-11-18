#ifndef CULTURALENTERPRISE_H
#define CULTURALENTERPRISE_H
#include <string>
#include <iostream>
using namespace std;

class CulturalEnterprise
{
public:
    CulturalEnterprise();
    void show();
    friend void ChangeName(CulturalEnterprise&, string);
    friend void ChangeAccount(CulturalEnterprise&, double);
    friend void ChangeIncome(CulturalEnterprise&, double);
    friend void ChangeNumber(CulturalEnterprise&, int);
    friend void SortShow(CulturalEnterprise[5]);
private:
    string name;
    double account;
    double yearly_income;
    int number_of_partners;
};

#endif // CULTURALENTERPRISE_H
