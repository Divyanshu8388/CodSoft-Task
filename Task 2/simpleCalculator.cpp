#include <iostream>
using namespace std;

int add(int a,int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a-b;
}

int multiply(int a, int b) {
    return a * b;
}

float division(float a, float b) {
    return a/b;
}

int main() {
    int a;
    int b;
    int op;
    cout << "enter a number :";
    cin >> a;
    cout << "enter a number :";
    cin >> b;

    cout << endl;

    cout << "enter 1 for addition" << endl;
    cout << "enter 2 for substraction" << endl;
    cout << "enter 3 for multiplication" << endl;
    cout << "enter 4 for division" << endl;

    cout << "enter your choice :";
    cin >> op;

    if(op == 1)  cout << add(a, b);
    else if(op == 2) cout << subtract(a, b);
    else if(op == 3) cout << multiply(a, b);
    else if(op == 4) cout << division(a, b);
    
    return 0;
}
