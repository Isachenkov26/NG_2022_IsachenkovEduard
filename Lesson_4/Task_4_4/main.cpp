#include <iostream>

using namespace std;

int main()
{
    char str[100];
    int amount = 0, m = 0, k = 0, i = 0, probel = 0, big = 0;
    cout << "Enter the string: ";
    cin.getline(str, 100);
    while(str[k] != '\0'){
        if(str[k] == ' '){
            amount++;
            probel++;
        }
        k++;
    }
    while(str[i] != '\0'){
        if(probel >= 1){
            break;
        }
        for(char bigLetter = 'A'; bigLetter <= 'Z'; bigLetter++){
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
    while(str[m] != '\0'){
        if(probel >= 1){
            break;
        }
        for(char bigLetter = 'A'; bigLetter <= 'Z'; bigLetter++){
            if(str[m] == bigLetter && (str[m+1] == 'A' || str[m+1] == 'B' || str[m+1] == 'C' || str[m+1] == 'D' || str[m+1] == 'E' || str[m+1] == 'F' || str[m+1] == 'G' ||
                                                    str[m+1] == 'H' || str[m+1] == 'I' || str[m+1] == 'J' || str[m+1] == 'K' || str[m+1] == 'L' || str[m+1] == 'M' || str[m+1] == 'N' ||
                                                    str[m+1] == 'O' || str[m+1] == 'P' || str[m+1] == 'Q' || str[m+1] == 'R' || str[m+1] == 'S' || str[m+1] == 'T' || str[m+1] == 'U'||
                                                    str[m+1] == 'V' || str[m+1] == 'W' || str[m+1] == 'X' || str[m+1] =='Y' || str[m+1] == 'Z')){
                big++;
            }
        }
        m++;
    }
    if(big > 0){
        amount++;
    }
    if(probel > 0){
        amount++;
    }
    cout << str << " - " << amount;
    return 0;
}
