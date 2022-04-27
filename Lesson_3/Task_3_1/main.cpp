#include <iostream>

using namespace std;

int main()
{
    int size, number;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++){
        cout << "Enter " << i << " element: ";
        cin >> arr[i];
    }
    cout << "What number you want to check: ";
    cin >> number;
    for(int i = 0; i < size; i++){
        if(arr[i] == number)
            cout << "I know that number!";
    }
    return 0;
}
