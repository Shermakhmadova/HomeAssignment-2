//
// Created by user on 4/8/2023.
//

#include "problem3.h"
#include <iostream>
using namespace std;
int main() {
    char o;
    double a, b;

    cout << "Enter the operator (+, -, *, /): \n";
    cin >> o;

    cout << "Enter two numbers: \n";
    cin >> a >> b;

    switch(o) {
        case '+':
            cout << a << " + " << b << " = " << a + b;
            break;
        case '-':
            cout << a << " - " << b << " = " << a - b;
            break;
        case '*':
            cout << a << " * " << b << " = " << a * b;
            break;
        case '/':
            if (a == 0) {
                cout << "Error: division by zero";
            } else {
                cout << a << " / " << b << " = " << a/b;
            }
            break;
    }
    return 0;
}