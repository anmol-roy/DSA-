# include <bits/stdc++.h>
using namespace std;
int main (){
    int a = 1025;
    int *p ;
    p = &a;
    cout << "size of int is " << sizeof(int) << endl;
    cout << "Address of p is " << p << " " << *p <<endl;
    cout << "Address of p+1 is " << p+1 << " " <<*(p+1) <<endl;

    char *p0;
    p0 = (char*)p;
    cout << "size of char is " << sizeof(char) << endl;
    cout << "Address of p0 is " << (void*)p0 << " " << (int)*(p0) <<endl;
    cout << "Address of p0+1 is " << (void*)(p0+1) << " " << (int)*(p0+1) <<endl;
    cout << "Address of p0+2 is " << (void*)(p0+2) << " " << (int)*(p0+2) <<endl;
    cout << "Address of p0+3 is " << (void*)(p0+3) << " " << (int)*(p0+3) <<endl;




    return 0;
}