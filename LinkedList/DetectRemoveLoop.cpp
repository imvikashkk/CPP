#include <iostream>
#include <map>
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

void LLCMap(node* head){

    if(head == NULL){
        cout<<"Single Node No LOOP ";
    }

    map<node*,bool> m;

    node* temp = head->next;
    node* tmp = head;

    while(temp != NULL){

        if(m[temp] == true){
            m[temp] = false;
            break;
        }
        m[temp] = true;
        temp = temp->next;
        tmp = tmp->next;
        
    }

    if(m[temp] == false){
        cout<<"loop to hai Bhai ";
        cout<<temp->data;
        tmp->next = NULL;
        // temp = tmp;
    }
    else{
        cout<<"Loop NAhi HAi Yrr ";
    }

}

// Traverse
int print(node *head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}


int main(){
 
    node* Node1 = new node(10);
    node* Node2 = new node(20);
    node* Node3 = new node(30);
    node* Node4 = new node(40);
    node* Node5 = new node(50);

    Node1->next = Node2;
    Node2->next = Node3;
    Node3->next = Node4;
    Node4->next = Node5;
    Node5->next = Node3;

    LLCMap(Node1);
    cout<<endl;
    print(Node1);
 
return 0;
}