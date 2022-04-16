#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c, d, x1, x2;
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
    else if (d < 0) cout << "No roots";

    else if (d == 0){
        x1 = -(b/(2*a));
        cout << "The equation has one root: " << x1;
    }

    return 0;
}
