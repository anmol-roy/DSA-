# include <bits/stdc++.h>
using namespace std;
int main (){


    int x = 5;
    int *p = &x;
    *p = 6;
    int** q = &p;
    int*** r = &q;
    cout << "Value of x: " << *p << endl;
    cout << "Value of x using q: " << *q << endl;
    cout << "Value of x using r: " << **q << endl;
    cout << "Value of x using r: " << **r << endl;
    cout << "Value of x using r: " << ***r << endl;
    ***r = 10;
    cout << "Value of x after changing using r: " << x << endl;
    **q = *p + 2;
    cout << "Value of x after changing using q: " << x << endl;



    return 0;
}