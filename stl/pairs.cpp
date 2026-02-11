# include <iostream>

# include <utility>

using namespace std;
int main (){
    // pair <int, string>p;
    // // p = make_pair(10, "Hello");
    // p = {2, "World"};
    // pair < int, string> &p1 = p;
    // p1.first = 20;

    
    // cout << p.first << "" << p.second <<endl;

    int a[] = {1,2,3,4,5};
    int b[] = {10,20,30,40,50};
    pair<int,int> p_array[5];
    p_array[0] = {1,2};
    p_array[1] = {3,4};
    p_array[2] = {5,6};
    p_array[3] = {7,8};
    p_array[4] = {9,10};
    swap(p_array[0], p_array[2]);
    for (int i=0; i< 5; ++i){
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }

}