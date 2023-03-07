#include <iostream>
using namespace std;
 
class node{
    public:
    int data;
    node *next;

    // Constructor
    node(int data){
        this->data = data;
        this->next = NULL;
    }

};

node* kReverse(node* head, int k) {
    //base call
    if(head == NULL) {
        return NULL;
    }
    
    //step1: reverse first k nodes
    node* forword = NULL;
    node* curr = head;
    node* prev = NULL;
    int count= 0;
    
    while( curr != NULL && count < k ) {
        forword = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forword;
        count++;
    }
    
    //step2: Recursion dekhlega aage ka 
    if(forword != NULL) {
        head -> next = kReverse(forword,k);
    }
    
    //step3: return head of reversed list
    return prev;
}



// Traverse
int print(node *head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }cout<<endl;
}

int main(){
 
    node* Node1 = new node(10);
    node* Node2 = new node(20);
    node* Node3 = new node(30);
    node* Node4 = new node(40);
    node* Node5 = new node(50);
    node* Node6 = new node(60);
    node* Node7 = new node(70);
    node* Node8 = new node(80);

    Node1->next = Node2;
    Node2->next = Node3;
    Node3->next = Node4;
    Node4->next = Node5;
    Node5->next = Node6;
    Node6->next = Node7;
    Node8->next = NULL;

   

    print(Node1);

    Node1 = kReverse(Node1,2);

    print(Node1);
 
return 0;
}