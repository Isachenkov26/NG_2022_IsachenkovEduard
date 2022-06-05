#include "coldgun.h"

ColdGun::ColdGun()
{
    damage = -1;
    weight = -1;
    wear = 100;
    company = "NOCOMPANY";
}

int ColdGun::wearGun(){
    wear -= 10;
    return wear;
}

int ColdGun::wearDamage(){
    damage /= 2;
    return damage;
}

void ColdGun::showGun(string s_company, int s_damage, int s_wear, int s_weight){
    string firstInput;
    ColdGun knife;
    knife.setCompany(s_company);
    knife.setDamage(s_damage);
    knife.setWear(s_wear);
    knife.setWeight(s_weight);
    cout << "Knife (" << knife.getCompany() << " - company, " << knife.getDamage() << " - dmg, " << knife.getWeight() << "kg - weight, " << knife.getWear() << " - wear" << ")" << endl;
    while(knife.getWear() != 0){
        cout << "Attack? (" << knife.getDamage() << " - dmg, " << knife.getWear() << " - wear)" << endl << "<< ";
        cin >> firstInput;
        if(firstInput == "yes" || firstInput == "Yes"){
            cout << "+---------------------+" << endl
                    <<  "| You hit the targe   |" << endl
                    << "+---------------------+"<< endl;
            knife.wearGun();
            if(knife.getWear() == 50){
                knife.wearDamage();
                cout << "+-----------------------------------------------------------------------------------+" << endl
                        <<  "|   Unfortunately, your weapon loses half of its damage because it is half broken   |" << endl
                        <<  "+---------------------------------------------------------------------------------- +" << endl;
            }
            if(knife.getWear() == 0){
                cout << "+-------------------------+" << endl
                        <<  "| Your knife is broken :( |" << endl
                        << "+-------------------------+" << endl;
                break;
            }
        }
    }
}
