#include <iostream>

using namespace std;

void searchElement(int arr[], int num, int amount){
    if(amount >= 1){
        if(num == arr[amount])
            cout << "Number " << num << " is present in array. It's index " << amount << endl;
    searchElement(arr, num, amount-1);
    }
}

int main(){
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0}, num, amount = (sizeof(arr)/sizeof(int))-1;
    cout << "Enter your number: ";
    cin >> num;
    searchElement(arr, num, amount);
    return 0;
}
