#include <iostream>

using namespace std;

int main()
{
    double motherboard, videocard, cpu, discount, price;
    cout << "Motherboard price: "; cin >> motherboard;
    cout << "Videocard price: "; cin >> videocard;
    cout << "CPU price: "; cin >> cpu;
    cout << "Discount: "; cin >> discount;
    price = (100-discount)*0.01*(motherboard + videocard + cpu);
    cout << "Your PC will cost - " << price << '$';
    return 0;
}
