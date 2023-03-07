#include <iostream>
using namespace std;
 
class node{

    public: 
    int data;
    node* next;

    node(int data){
        this->data = data;
        this->next = NULL;
    }

};



////////////////////////////// First Approach ////////////////////////

int getLength(node* head){
     int  count = 0;
    while(head != NULL){
        count++;
        head = head->next;
    }
    return count;
}

int middleApproach1(node* head){
   int middle =  getLength(head)/2+1;
   int count = 1;
   while(middle != count){
        head = head->next;
        count++;
   }
   return head->data;
}

//////////////////////////// Second Approach //////////////////////////

node* middleApproach2(node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    else{
    node* hero = head->next;
    node* zero = head;

    while(hero != NULL){
        hero = hero->next;
        if(hero != NULL){
            hero = hero->next;
        }
            zero = zero->next;
    }
    return zero;
    }
}


int main(){
    node* Node1 = new node(10);
    // node* Node2 = new node(20);
    // node* Node3 = new node(30);
    // node* Node4 = new node(40);
    // node* Node5 = new node(50);

    Node1->next = NULL; // Node2;
    // Node2->next = Node3;
    // Node3->next = Node4;
    // Node4->next = Node5;
    // Node5->next = NULL;

    cout<<middleApproach1(Node1)<<endl;
    cout<<middleApproach2(Node1)->data<<endl;

 
return 0;
}