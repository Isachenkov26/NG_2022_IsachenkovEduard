#include <iostream>

using namespace std;

void searchElement(int arr[], int num, int length){
    if(length >= 0){
        if(num == arr[length])
            cout << "Number " << num << " is present in array. It's index " << length << endl;
    searchElement(arr, num, length-1);
    }
}

int main(){
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int num, length = (sizeof(arr)/sizeof(int))-1;
    cout << "Enter your number: ";
    cin >> num;
    cout << length << endl;
    searchElement(arr, num, length);
    return 0;
}
