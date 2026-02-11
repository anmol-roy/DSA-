#include <iostream>
#include <cstring> // Correct header for strlen
using namespace std;
        
void print(char* c)
{
    // int i = 0;
    // while(c[i] != '\0'){
    // while(*(c+i) != '\0'){
    //     cout << c[i]; 
    //     i++;
    // }
    while(*c != '\0'){
        cout << *c;
        c++;

    }
}


int main () {
    // // char c[5]; // Size 5 to accommodate 'john' + '\0'
    // // c[0] = 'j';
    // // c[1] = 'o';
    // // c[2] = 'h';
    // // c[3] = 'n';
    // // c[4] = '\0'; // Explicitly add the terminator
    // char c[] = "john";
    // char *c2;
    // c2 = c;
    // cout<< c2[2];
    // cout<< *(c2+2);

    // // int len = strlen(c);
    // // cout << len << endl; // Will now reliably output 4



    char  c [20] = "hello";
    print(c);


    return 0;
}
