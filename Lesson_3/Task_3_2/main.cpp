#include <iostream>
#include <random>
#include <time.h>

using namespace std;

int main()
{
    srand(time(0));
    int firstArray[4], secondArray[4];
    for(int i = 0; i < 4; i++){
        firstArray[i] = rand()%9;
        secondArray[i] = rand()%9;
    }
    for(int i = 0; i < 4; i++)
        cout << firstArray[i];

    if(firstArray[0] > secondArray[0])
        cout << " > ";
    else if (firstArray[0] == secondArray[0] && firstArray[1] > secondArray[1])
        cout << " > ";
    else if (firstArray[0] == secondArray[0] && firstArray[1] == secondArray[1] && firstArray[2] > secondArray[2])
        cout << " > ";
    else if (firstArray[0] == secondArray[0] && firstArray[1] == secondArray[1] && firstArray[2] == secondArray[2] && firstArray[3] > secondArray[3])
        cout << " > ";

    else if (firstArray[0] < secondArray[0])
        cout << " < ";
    else if (firstArray[0] == secondArray[0] && firstArray[1] < secondArray[1])
        cout << " < ";
    else if (firstArray[0] == secondArray[0] && firstArray[1] == secondArray[1] && firstArray[2] < secondArray[2])
        cout << " < ";
    else if (firstArray[0] == secondArray[0] && firstArray[1] == secondArray[1] && firstArray[2] == secondArray[2] && firstArray[3] < secondArray[3])
        cout << " < ";

    else
        cout << " = ";

    for(int i = 0; i < 4; i++)
        cout << secondArray[i];
    return 0;
}
