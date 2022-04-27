#include <iostream>

using namespace std;

int main()
{
    int number = 0, hash = 0, lastNumber = 0, tmpNumber = 0, num = 0;
    cout << "Enter your number: ";
    cin >> number;
    for(int i = number; i > 0; i /= 10){
        tmpNumber = i / 10;
        lastNumber = i % 10;
        if((num % 10 == lastNumber && tmpNumber == 0) || (lastNumber == tmpNumber % 10))
            hash += lastNumber;
    }
    cout << "Hash code with number(" << number << "): " << hash;
    return 0;
}
