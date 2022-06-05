#ifndef COLDGUN_H
#define COLDGUN_H

#include <iostream>

using namespace std;

class ColdGun
{
public:
    ColdGun();
    int wearGun();
    int wearDamage();
    void showGun(string s_company, int s_damage, int s_wear, int s_weight);

    void setDamage (int in_damage) {damage = in_damage;}
    int getDamage(){return damage;}

    void setWeight (int in_weight) {weight = in_weight;}
    int getWeight(){return weight;}

    void setWear (int in_wear) {wear = in_wear;}
    int getWear(){return wear;}

    void setCompany (string in_company) {company = in_company;}
    string getCompany(){return company;}

private:
    int damage, weight, wear;
    string company;
};

#endif // COLDGUN_H
