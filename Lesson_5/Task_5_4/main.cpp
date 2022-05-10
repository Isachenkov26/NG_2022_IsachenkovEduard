#include <iostream>
#include <cmath>

using namespace std;

void quadraticEquation(int a, int b, int c){
    int d;
    d = (b*b) - 4*a*c;
    if(d > 0){
        d = sqrt(d);
        cout << "The first root: " << (-b + d)/(2*a) << endl;
        cout << "The second root: " << (-b - d)/(2*a) << endl;
    }
    else if (d < 0) {
        cout << "The equation is negative, we use higher mathematics" << endl;
        d = sqrt(-d);
        cout << "The first root: " << (-b/(2*a)) << (-d/(2*a)) << "i" << endl;
        cout << "The second root: " << (-b/(2*a)) << "+" << (d/(2*a)) << "i" << endl;
    }
    else if (d == 0){
        cout << "The equation has one root: " << -(b/(2*a)) << endl;
    }
}

int main()
{
    quadraticEquation(2, 5, 1);
    return 0;
}
