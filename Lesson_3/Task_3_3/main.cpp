#include <iostream>

using namespace std;

int main()
{
    int array[20]={0}, num = 0;
    for(int i = 0; i < 20; i++){
        cout << "Enter " << i << " element: ";
        cin >> array[i];
        if(array[i] > num)
            num = array[i];
        if (array[i] == 0)
            break;
    }
    for(int i = 0; i < num; i++){
        for(int j = 0; j < 20; j++){
            if(array[j] > i)
                cout << "*";
           else
                cout << " ";
            }
            cout << endl;
        }
}
