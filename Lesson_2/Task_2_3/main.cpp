#include <iostream>

using namespace std;

int main()
{
    int number = 0, hash = 0, tmpNumber = 0;
    cout << "Enter your number: ";
    cin >> number;
    for(int i = number; i > 0; i /= 10){
        tmpNumber = i / 10;
        if(i % 10 == tmpNumber % 10 || (number % 10 == i % 10 && tmpNumber == 0))
            hash += (i % 10);
    }
    cout << "Hash code with number(" << number << "): " << hash;
    return 0;
}
