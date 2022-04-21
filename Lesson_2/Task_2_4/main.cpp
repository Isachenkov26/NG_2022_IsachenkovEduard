#include <iostream>

using namespace std;

int main()
{
    int size;
    cout << "Enter size: "; // Висота ялинки
    cin >> size;
    for(int i = 1; i <= size; i++){
        for(int j = 0; j < size - i; j++){
            cout << ' ';
        }
        for(int k = 0; k < i * 2 - 1; k++){
            cout << '*';
        }
        cout << endl;
    }
    for(int h = 0; h < size-1; h++){
        cout << ' ';
    }
    cout << '*';
    return 0;
}
