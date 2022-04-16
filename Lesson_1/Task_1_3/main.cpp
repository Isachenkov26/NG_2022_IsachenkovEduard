#include <iostream>

using namespace std;

int main()
{
    int output;
    double years;
    cout << "Enter your age: "; cin >> years;
    if(years > 10){
        cout << "Do you study? (1\\0): "; cin >> output;
        if(output == 0) cout << "Why?";
        else cout << "You are cool!";
    }
    else cout << "Wow you're so big!";
    return 0;
}
