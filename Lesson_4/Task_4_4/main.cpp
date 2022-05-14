#include <iostream>

using namespace std;

int main()
{
    char str[100];
    int amount = 0, i = 0;
    cout << "Enter the string: ";
    cin.getline(str, 100);
    while(str[i] != '\0'){
        for(char bigLetter = 'A'; bigLetter <= 'Z'; bigLetter++){
            if(str[i] == bigLetter && (str[i+1] == 'A' || str[i+1] == 'B' || str[i+1] == 'C' || str[i+1] == 'D' || str[i+1] == 'E' || str[i+1] == 'F' || str[i+1] == 'G' ||
                                                        str[i+1] == 'H' || str[i+1] == 'I' || str[i+1] == 'J' || str[i+1] == 'K' || str[i+1] == 'L' || str[i+1] == 'M' || str[i+1] == 'N' ||
                                                        str[i+1] == 'O' || str[i+1] == 'P' || str[i+1] == 'Q' || str[i+1] == 'R' || str[i+1] == 'S' || str[i+1] == 'T' || str[i+1] == 'U'||
                                                        str[i+1] == 'V' || str[i+1] == 'W' || str[i+1] == 'X' || str[i+1] =='Y' || str[i+1] == 'Z'))
                amount++;
            if(str[i] ==  bigLetter){
                for(char smallLetter = 'a'; smallLetter <= 'z'; smallLetter++){
                    if(str[i+1] == smallLetter){
                        amount++;
                    }
                    else if(str[0] == smallLetter)
                        amount++;
                }
            }
        }
        i++;
    }
    if(amount > 5)
        amount -= 4;
    cout << str << " - " << amount;
    return 0;
}
