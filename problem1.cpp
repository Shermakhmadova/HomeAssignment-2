//
// Created by user on 4/8/2023.
//

#include <iostream>
using namespace std;
int main() {
    int age;
    cout << "enter your age:" << endl;
    cin >> age;
    if (age > 18) {
        cout << "Eligible";
    } else {
        cout << "Not Eligible";
    }
}