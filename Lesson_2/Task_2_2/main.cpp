#include <iostream>

using namespace std;

int main()
{
    int number, suma = 0;
    cout << "Enter your number: ";
    cin >> number;
    while(number > 0){
        if((number % 2) == 0){
            suma += number % 10;
        }
        number /= 10;
    }
    cout << "Sum of even numbers are: " << suma;
    return 0;
}
