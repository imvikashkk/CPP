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

// Traverse
int print(node *head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

// Iterative Reverse
void ReverseIterative(node* &head){
    node* prev = NULL;
    node* curr = head;
    node* forword = NULL;
    while(curr != NULL){
        forword = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forword;
    }
    head = prev;
}

// Recursive REverse
node* ReverseRecursive(node* &head, node* prev, node* curr){
       if(curr==NULL){
            return NULL;
       }

        node* forword = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forword;

        if(curr != NULL){
            head = ReverseRecursive(curr, prev,forword);
        }
        return head;
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

    // ReverseIterative(Node1);

    ReverseRecursive(Node1, NULL, Node1);
    // Node1 = ReverseRecursive(Node1, NULL, Node1);

    
    print(Node1);



 
    
 
return 0;
}