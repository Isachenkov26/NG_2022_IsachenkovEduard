#include <iostream>

using namespace std;

int main()
{
    int number, suma = 0;
    cout << "Enter your number: ";
    cin >> number;
    for(int i = number; i> 0; i /= 10){
        if(i % 2 == 0){
            suma += i % 10;
        }
    }
    cout << "Sum of even numbers are: " << suma;
    return 0;
}
