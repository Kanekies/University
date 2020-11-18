#include "culturalenterprise.h"

CulturalEnterprise::CulturalEnterprise()
{
    this->name = "";
    this->account = 0;
    this->yearly_income = 0;
    this->number_of_partners = 0;
}

void CulturalEnterprise::show()
{
    cout << "Name: " << this->name << " Account: " << this->account << " Income: " << this->yearly_income << " Number: " << this->number_of_partners;
}
void ChangeName(CulturalEnterprise& ent, string name)
{
    ent.name = name;
}

void ChangeAccount(CulturalEnterprise& ent, double account)
{
    ent.account = account;
}

void ChangeIncome(CulturalEnterprise& ent, double income)
{
    ent.yearly_income = income;
}

void ChangeNumber(CulturalEnterprise& ent, int number)
{
    ent.number_of_partners = number;
}

void SortShow(CulturalEnterprise enterprises[5])
{
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5 - i - 1; j++)
        {
            if(enterprises[j].name > enterprises[j + 1].name)
            {
                CulturalEnterprise temp = enterprises[j];
                enterprises[j] = enterprises[j + 1];
                enterprises[j + 1] = temp;
            }
        }
    }
    for(int i = 0; i < 5; i++)
    {
        enterprises[i].show();
        cout << endl;
    }
}
