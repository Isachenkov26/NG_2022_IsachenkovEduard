#include <iostream>
#include "firegun.h"
#include "coldgun.h"

using namespace std;

int main()
{
    int input;
    cout << "Your current weapons: 1.Assault Rifle, 2.Knife " << endl << "Enter number: - ";
    cin >> input;
    if(input == 1){
        FireGun assaultRifle;
        assaultRifle.showGun("Colt's Manufacturing Company", 15, 1, 100, 4, 90);
    }
    else if (input == 2) {
       ColdGun knife;
       knife.showGun("BlackFox", 6, 100, 1);
    }
    else{
        cout << "+-----------------------------------------+" << endl
                << "|  You have entered an incorrect number   |" << endl
                << "+-----------------------------------------+" << endl;
        return 0;
    }
    return 0;
}
