#include <iostream>

using namespace std;

int main()
{
    int size;
    cout << "Enter your square size: " << endl;
    cin >> size;
    for(int i  =  0; i < size; i++){
        cout << '*'; // First column
        for(int k = 0; k < size - 2; k++){
            if (i == 0 || i == size - 1)
                cout << "*"; // All other column
            else
                cout << " "; // Midst square
             }
        cout << '*' << endl; // Last column
    }
    return 0;
}
