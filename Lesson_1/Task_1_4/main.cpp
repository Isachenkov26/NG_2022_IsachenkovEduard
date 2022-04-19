#include <iostream>

using namespace std;

int main()
{
    double motherboard, videocard, cpu, discount;
    cout << "Motherboard price: ";
    cin >> motherboard;
    cout << "Videocard price: ";
    cin >> videocard;
    cout << "CPU price: ";
    cin >> cpu;
    cout << "Discount: ";
    cin >> discount;
    cout << "Your PC will cost - " << (100-discount)*0.01*(motherboard + videocard + cpu) << '$';
    return 0;
}
