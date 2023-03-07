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

// Simple Approach
void LLC(node* head){
    if(head == NULL || head->next == NULL){
        cout<<"Non-Circular";
        return;
    }

    node* temp = head->next;
    if(temp->next == NULL){
        cout<<"Circular";
        return;
    }

    while(temp->next != NULL && temp != head){
        temp = temp->next;
    }

    if(temp == head){
        cout<<"Circular";
        return;
    }
    if(temp != head){
        cout<<"Non-Circular";
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

    LLC(Node1);
return 0;

}