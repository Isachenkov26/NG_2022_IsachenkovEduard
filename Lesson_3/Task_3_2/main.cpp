#include <iostream>
#include <random>
#include <time.h>

using namespace std;

int main()
{
    srand(time(0));
    int firstArray[4], secondArray[4], firstNum = 0, secondNum = 0;
    for(int i = 0; i < 4; i++){
        firstArray[i] = rand()%9;
        secondArray[i] = rand()%9;
    }
    cout << "Your first array is: ";
    for(int i = 0; i < 4; i++)
        cout << " " << firstArray[i];

    cout << endl << "Your second array is: ";
    for(int i = 0; i < 4; i++)
        cout << " " << secondArray[i];

    firstNum = firstArray[0] * 1000;
    firstNum += (firstArray[1] * 100);
    firstNum += (firstArray[2] * 10);
    firstNum += firstArray[3] ;

    secondNum = secondArray[0] * 1000;
    secondNum += (secondArray[1] * 100);
    secondNum += (secondArray[2] * 10);
    secondNum += secondArray[3];

    if(firstNum > secondNum)
        cout << endl << firstNum << " > " << secondNum;
    else if(firstNum < secondNum)
            cout << endl << firstNum << " < " << secondNum;
    else
        cout << endl << firstNum << " = "  << secondNum;
    return 0;
}
