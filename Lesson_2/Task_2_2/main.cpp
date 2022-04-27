#include <iostream>

using namespace std;

int main()
{
    int number, num, suma = 0;
    cout << "Enter your number: ";
    cin >> number;
    num = number;
    while(num > 0){
        if((num % 2) == 0){
            suma += num % 10;
        }
        num /= 10;
    }
    cout << "Sum of even numbers are: " << suma;
    return 0;
}
