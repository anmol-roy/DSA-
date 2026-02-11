#include <bits/stdc++.h>
using namespace std;
void increment(int *p){

    *p = *p + 1;
}
int main (){
    int a = 10;
    increment(&a);
    cout << &a << endl     ;
    cout << a << endl;
    cout << &a << endl     ;
    return 0;
}













// void increment(int a){
//     a = a + 1;
// }
// int main (){
//     int a;
//     a = 5;
//     increment(a);
//     cout << a << endl;

//     return 0;
// }