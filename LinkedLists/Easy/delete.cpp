#include<bits/stdc++.h>
using namespace std;


class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};
class List{
    Node* head;
    Node* tail;
public:
    List(){
        head = NULL;
        tail = NULL;
    }
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }
    void printll(){
        Node* temp = head;
        while(temp != NULL) {
            cout <<temp->data << ">";
            temp = temp->next;
        }
        cout << endl;
    }
    void delete_first(){
        Node* temp = head;
        head = head->next;
        cout << temp->data<< endl;
        temp->next = NULL;
        delete temp;
    }
    void delete_last(){
        Node* ptr = head;
        while(ptr->next->next != NULL){
            ptr = ptr->next;
        }
        ptr->next = NULL;
    }
    void delete_specific_pos(int pos){
        Node* ptr = head;
        for(int i=0;i<pos-1;i++){
            ptr = ptr->next;
        }
        cout<<ptr->data<<endl;
        Node* NodeToDelete = ptr->next;
        ptr->next= NodeToDelete->next;
        NodeToDelete->next = NULL;
        delete NodeToDelete;

    }
};


int main(){
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);
    ll.printll();
    // ll.delete_first();
    // ll.delete_last();
    ll.delete_specific_pos(2);
    ll.printll();
}