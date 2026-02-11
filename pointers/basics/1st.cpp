#include<bits/stdc++.h>
using namespace std;
int main (){
    int a;
    int *p;
    p = &a;
    a = 5;
    // cout << "value of p: " << p << endl;
    // cout << "address of a: " << &a << endl;
    // // print &p 
    // cout << "  The address where the pointer p is stored" << &p << endl;


    // cout << "value at address p is pointing to: " << *p << endl;

    // *p = 10;
    // cout << "value of a is: " << a << endl;

    // int b = 20;
    // // *p = b;
    // p = &b;
    // cout << "value of a is: " << *p << endl;

    cout << p << endl;
    cout << p+1 << endl;
    cout << p+2 << endl;
    cout << p+3 << endl;


}