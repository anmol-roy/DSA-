#include <bits/stdc++.h>
using namespace std;
int main (){
    // int x = 5;
    // int *p;
    // p = &x;
    // cout << "value of p" << p << endl;
    // cout << "refrencce of p" << *p << endl;
    // *p = *p + 1;
    // cout << "print *p " << *p << endl;
    // cout << "print next p " << &p << endl;

    int A[5] = {10, 20, 30, 40, 50};
    int *p;
    // p = &A[0];
    // cout << "address of p is " << p << endl;
    // cout << "value at p is " << *p << endl;
    // p++;
    // cout << "address of p is " << p << endl;
    // cout << "value at p is " << *p << endl;



    p = A;
    // print A
    cout << "printing array A using pointer " << endl;
    cout << A << endl;
    cout << *A << endl;
    
    cout << A+1 << endl;
    cout << *(A+1) << endl;

    











    return 0;

}