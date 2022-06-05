#ifndef GUN_H
#define GUN_H

#include <iostream>

using namespace std;

class FireGun
{
public:
    FireGun();

    void setDamage (int in_damage) {damage = in_damage;}
    int getDamage(){return damage;}

    void setRange(int in_range) {range = in_range;}
    int getRange(){return range;}

    void setWeight (int in_weight) {weight = in_weight;}
    int getWeight(){return weight;}

    void setRateOfFire(int in_rateOfFire){rateOfFire = in_rateOfFire;}
    int getRateOfFire(){return rateOfFire;}

    void setClip(int in_clip){clip = in_clip;}
    int getClip(){return clip;}

    void setCompany (int in_company) {company = in_company;}
    string getCompany(){return company;}


private:
    int damage, range, weight, rateOfFire, clip;
    string company;
};

class ColdGun{};
#endif // GUN_H
