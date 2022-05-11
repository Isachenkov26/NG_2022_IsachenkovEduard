#include <iostream>

using namespace std;

int i = 0;

void drawLine(int size){
    if(size >= 1){
        cout << "*";
        drawLine(size-1);
    }
}

void drawMiddle(int size, int num){
    if(num >= 1){
        if(i == 0)
            cout << "*";
        else
            cout << " ";
        drawMiddle(size, num-2);
        i++;
    }
}

void extremeSide(int size, int num){
    if(size >= 1){
        cout << '*';
        drawMiddle(size, num);
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
    extremeSide(size-1, num);
    drawLine(size);
    return 0;
}
