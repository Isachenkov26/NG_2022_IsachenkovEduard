#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c, d, x1, x2, x1_1, x1_2, x2_2;
    cout << "Enter a: "; cin >> a;
    cout << "Enter b: "; cin >> b;
    cout << "Enter c: "; cin >> c;
    d = (b*b) - 4*a*c;
    if(d > 0){
        d = sqrt(d);
        x1 = (-b + d)/(2*a);
        x2 = (-b - d)/(2*a);
        cout << "The first root: " << x1 << endl;
        cout << "the second root: " << x2 << endl;
    }
    else if (d < 0) {
        cout << "The equation is negative, we use higher mathematics" << endl;
        d = sqrt(-(d));
        x1_1 = (-b/(2*a));
        x1_2 = (-d/(2*a));
        x2_2 = (d/(2*a));
        cout << "The first root: " << x1_1 << x1_2 << "i" << endl;
        cout << "the second root: " << x1_1 << "+" << x2_2 << "i" << endl;
    }

    else if (d == 0){
        x1 = -(b/(2*a));
        cout << "The equation has one root: " << x1;
    }

    return 0;

}
