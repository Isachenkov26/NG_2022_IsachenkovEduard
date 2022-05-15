#include <iostream>

using namespace std;

void drawLine(int size){
    if(size >= 1){
        cout << "*";
        drawLine(size-1);
    }
}

void drawMiddle(int size, int num){
    if(num >= 0){
        cout << " ";
        drawMiddle(size, num-2);
    }
}

void extremeSide(int size, int num){
    if(size >= 1){
        cout << '*';
        drawMiddle(size, num-1);
        cout << '*' << endl;
        extremeSide(size-1, num);
    }
}

int main()
{
    int size;
    cout << "Enter your square size: ";
    cin >> size;
    int num = size;
    if(size > 5)
        num += 1;
    drawLine(size);
    cout << endl;
    extremeSide(size-2, num);
    drawLine(size);
    return 0;
}
