#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printVec(vector<string> &v){
    cout << "size" << v.size() << endl;
    for (int i = 0; i< v.size(); i++){
        cout << v[i] << " ";
    }
    // v.push_back(100);
    cout << endl;

}
int main (){
    // vector<int> v;
    // v.push_back(10);
    // v.push_back(20);
    // // int n;
    // // cin >> n;
    // // for (int i = 0; i < n; ++i){
    // //     int x;
    // //     cin >> x;
    // //     v.push_back(x);// 0(1)
    // // }
    // // printVec(v);
    // // v.pop_back();
    // // printVec(v);

    // vector<int> &v2 = v; // o(n)
    // v2.push_back(30);
    // printVec(v);
    // printVec(v);
    // printVec(v2);

    

    vector<string> v1;
    int n;
    cin >> n;
    for ( int i = 0; i < n; ++i){
        string s;
        cin >> s;
        v1.push_back(s);
    }
    printVec(v1);
    
}