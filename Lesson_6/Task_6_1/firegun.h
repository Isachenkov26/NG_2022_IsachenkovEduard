#ifndef FIREGUN_H
#define FIREGUN_H

#include <iostream>

using namespace std;

class FireGun
{
public:
    FireGun();
    int misFire();
    void showGun(string s_company, int s_damage, int s_rapidity, int s_range, int s_weigth, int s_clip);

    void setDamage (int in_damage) {damage = in_damage;}
    int getDamage(){return damage;}

    void setRange(int in_range) {range = in_range;}
    int getRange(){return range;}

    void setWeight (int in_weight) {weight = in_weight;}
    int getWeight(){return weight;}

    void setRapidity(int in_rapidity){rapidity = in_rapidity;}
    int getRapidity(){return rapidity;}

    void setClip(int in_clip){clip = in_clip;}
    int getClip(){return clip;}

    void setCompany (string in_company) {company = in_company;}
    string getCompany(){return company;}

private:
    int damage, range, weight, rapidity, clip;
    string company;
};

#endif // FIREGUN_H
