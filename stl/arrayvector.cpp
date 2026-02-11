#include<bits/stdc++.h>
using namespace std;
// printVec(array<vector<int, 3>, 5> &arr){
//     for (int i = 0; i< arr.size(); i++){
//         cout << "Row " << i << ": ";
//     }
//     cout << endl;
// }
int main(){
    int N;
    cin >> N;
    vector<int>v[N];
    for (int i = 0; i< N; ++i){
        int n;
        cin>> n;
        for (int j = 0; j< n; ++j){
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }

    for (int i = 0; i< N; ++i){
        cout << "Row " << i << ": ";
        for (int j = 0; j< v[i].size(); ++j){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }


}