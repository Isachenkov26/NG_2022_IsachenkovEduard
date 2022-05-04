#include <iostream>

using namespace std;

int main()
{
    char firstString[100], secondString[100];
    int one = 0, two = 0;
    cout << "Enter your first string:  ";
    cin.getline(firstString, 100);
    cout << "Enter your second string: ";
    cin.getline(secondString, 100);
    while(firstString[one] != '\0'){
            one++;
    }
    while(secondString[two] != '\0'){
            two++;
    }
    if(one > two)
        cout << "First string is bigger!";
    else if (one < two)
        cout << "Second string is bigger!";
    else
        cout << "The strings are equal!";
    return 0;
}
