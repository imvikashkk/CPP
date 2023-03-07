#include <iostream>
using namespace std;

class node{
    public: 
    int data;
    node* next;

    // Constructor
    node(int data){
        this->data = data;
        this->next = NULL;
    }

};

void print(node* head){
    node* temp = head->next;
    cout<<head->data<<" ";

    while(temp->next != NULL && temp != head){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main(){
 
    node* Node1 = new node(10);
    node* Node2 = new node(20);
    node* Node3 = new node(30);
    node* Node4 = new node(40);

    Node1->next = Node2;
    Node2->next = Node3;
    Node3->next = Node4;
    Node4->next = Node1;

    print(Node1);
 
return 0;
}