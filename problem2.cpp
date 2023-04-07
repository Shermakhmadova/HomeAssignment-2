//
// Created by user on 4/8/2023.
//

#include <iostream>
using namespace std;
int main(){
    float a, b, c;
    cin>>a>>b>>c;
    if(a>b&&a>c){
        cout<<"the maximum number is:"<<a;
    } else if (b>c&&b>a){
        cout<<"the maximum number is:"<<b;
    } else{
        cout<<"the maximum number is:"<<c;
    }
}