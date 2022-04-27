#include <iostream>

using namespace std;

int main()
{
    int array[20], num;
    for(int i = 0; i < 20; i++){
        cout << "Enter " << i << " element: ";
        cin >> num;
        if (num == 0)
            break;
        array[i] = num;
    }
    for(int i = 0; i < 20; i++){
        if(array[i] != 0){
            for(int j = 0; j < array[i]; j++){
                cout << "*";
            }
            cout << endl;
        }
        else
            break;
    }
    return 0;
}
