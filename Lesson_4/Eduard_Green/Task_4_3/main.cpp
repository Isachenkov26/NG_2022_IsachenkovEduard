#include <iostream>

using namespace std;

int main()
{
    char str[248] = "No, maey! Yu znoy zgyq oy g ykixkz gtj o gs mrgj, zngz eua yurbk oz. Vrkgyk, "
                               "hk coykx gtj jut'z zkrr gteutk ghuaz znoy zgyq. Zu iusvrkzk oz eua tkkj zu avrugj "
                               "zu euax moznah tkc zgyq cozn jkiovnkx gtj tgsk oz roqk *EuaxTgsk*_*EuaxLgbuaxozkIuruax*.";
    char smallAlphabet[54] = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
    char bigAlphabet[54] = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int version = 0; version < 54; version++){
        for (int symbolsStr = 0; symbolsStr < 248; symbolsStr++){
            if(str[symbolsStr] != ' ')
                for (int symbolsABC = 0; symbolsABC < 54; symbolsABC++){
                    if (str[symbolsStr] == smallAlphabet[symbolsABC] || str[symbolsStr] == bigAlphabet[symbolsABC]) {
                        if(symbolsABC + 1 > 54 - 1)
                            str[symbolsStr] = smallAlphabet[(54 - symbolsABC - 1)];
                        else
                            str[symbolsStr] = smallAlphabet[symbolsABC + 1];
                    break;
                }
            }
        }
        cout << endl << str << endl;
    }
}
