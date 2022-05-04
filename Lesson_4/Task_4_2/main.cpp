#include <iostream>

using namespace std;

int main()
{
    char str[100];
    cout << "Enter the string: " << endl;
    cin.getline(str, 100);
    for(int i = 0; i < 100; i++){
        if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'Y' ||
            str[i] == 'a' || str[i] == 'e' || str[i] == 'i'  || str[i] == 'o'  || str[i] == 'u' || str[i] == 'y'){
                if(i % 2 != 0){
                    cout << str[i];
                }
                else{
                    cout << " ";
                }
            }
            else
                cout << " ";
    }
    return 0;
}
