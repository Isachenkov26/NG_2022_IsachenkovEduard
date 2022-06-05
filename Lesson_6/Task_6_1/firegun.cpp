#include "firegun.h"

FireGun::FireGun()
{
    damage = -1;
    range = -1;
    weight = -1;
    rapidity = -1;
    clip = -1;
    company = "NOCOMPANY";
}

int FireGun::misFire(){
    int misfire = rand() % 2;
    return misfire;
}

void FireGun::showGun(string s_company, int s_damage, int s_rapidity, int s_range, int s_weigth, int s_clip){
    int firstNum, chuck = 0;
    string firstInput, secondInput;
    FireGun assaultRifle;
    assaultRifle.setCompany(s_company);
    assaultRifle.setDamage(s_damage);
    assaultRifle.setRapidity(s_rapidity);
    assaultRifle.setRange(s_range);
    assaultRifle.setWeight(s_weigth);
    assaultRifle.setClip(s_clip);
    cout << "Assault Rifle ("<< assaultRifle.getCompany() << " - company, " << assaultRifle.getDamage() << " - dmg, " << assaultRifle.getRapidity() << " - rapidity, " << assaultRifle.getRange() << "m - range, " << assaultRifle.getWeight() << "kg - weight, " << assaultRifle.getClip() << " - chucks in a clip" << ")" << endl;
    while(chuck != assaultRifle.getClip()){
        firstNum = 0;
        cout << "Attack? " << endl << "<< ";
        cin >> firstInput;
        if(firstInput == "yes" || firstInput == "Yes"){
            while(firstNum != 1){
                if(assaultRifle.misFire() == 1){
                    cout << "+----------------------------------------------+" << endl
                             << "| The Assault Rifle misfired... Try to fix it! |" << endl;
                    cout << "|       Do you want to fix it right now?       |" << endl
                             << "+----------------------------------------------+" << endl << "<< ";
                    cin >> secondInput;
                    if(secondInput == "Yes" || secondInput == "yes"){
                        cout << "+-----------------------------+" << endl
                                 << "| You fixed the Assault Rifle |" << endl
                                 << "+-----------------------------+" << endl;
                        firstNum++;
                    }
                }
                else{
                    cout << "+---------------------+" << endl
                            << "| You hit the targe   |" << endl
                            << "+---------------------+"<< endl;
                    firstNum++;
                    chuck++;
                }
            }
        }
    }
}
