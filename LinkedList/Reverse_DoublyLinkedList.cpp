#include <iostream>
using namespace std;

 class node{
    public:
    int data;
    node* prev;
    node* next;

    node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};


// Traverse
int print(node *head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

void reverse(node* head){
    node* ans = NULL;
    node* ass = NULL;
    node* curr = head;
    node* forword = NULL;

    forword = curr->next;
    curr->next->prev = ass;
    curr->prev = ass;
    curr->next = ans;
    ans = curr;
    curr = forword;
}

int main(){
 
    node* Node1 = new node(10);
    node* Node2 = new node(20);
    node* Node3 = new node(30);
    node* Node4 = new node(40);

    Node1->next = Node2;
    Node2->next = Node3;
    Node3->next = Node4;
    Node4->next = NULL;

    Node1->prev = NULL;
    Node2->prev = Node1;
    Node3->prev = Node2;
    Node4->prev = Node3;

    print(Node1);
    cout<<endl;

    reverse(Node1);

    print(Node1);



 
return 0;
}