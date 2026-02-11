#include<bits/stdc++.h>
using namespace std;

// class Stack{
//     vector<int> v;

// public:
//     void push(int val){
//         v.push_back(val);
//     }

//     void pop(){
//         if(v.empty()){
//             cout << "Stack Underflow\n";
//             return;
//         }
//         v.pop_back();
//     }

//     int top(){
//         if(v.empty()){
//             cout << "Stack is empty\n";
//             return -1;
//         }
//         return v.back();
//     }

//     bool empty(){
//         return v.empty();
//     }
// };


class Stack {
    list<int >ll;

public:
    void push(int val) {
        ll.push_front(val);
    }
    void pop(){
        ll.pop_front();
    }
    int top(){
        return ll.front();
    }
    bool empty (){
        return ll.size() == 0;
    }

};


int main(){
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    s.pop();

    while(!s.empty()){
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}
