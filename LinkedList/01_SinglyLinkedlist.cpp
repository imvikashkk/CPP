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


// Insertion AT Beginning by head
void insertAtStart(node* &head, int val){
    node* temp = new node(val);
    temp->next = head;
    head = temp;
}


// Insertion At Last by head
void InsertAtLast(node* &head, int val){
    node* temp = new node(val);
    if(head == NULL){
        head = temp;
    }
    else{
    node *lastnode = head;
    while(lastnode->next != NULL){
        lastnode = lastnode->next;
        }
        lastnode->next = temp;

    }
}


// Insertion at given position
void insertAtPos(node* &head, int idx, int val){
    node *tmp = new node(val);
    node *temp = head;
    if(idx == 1){   // FOR fIRST pOSITION
        tmp->next = head;
        head = tmp;
    }
    else{      // FOR oTHER pOSITION
        int count = 1;
        while(count < idx-1){
            count++;
            temp = temp->next;
        }
        tmp->next = temp->next;
        temp->next = tmp;
    }
}


// Traverse
int print(node *head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

// Delete Head Node
void DeleteStart(node* &head){
    node* temp = head -> next;
    delete[] head;   // Free The Memory
    head = temp;
}

// Delete Last Node
void DeleteLast(node* &head){
        node *lastnode = head;
        while((lastnode->next)->next != NULL){
        lastnode = lastnode->next;
        }
        delete[] (lastnode->next)->next; // Free The Memory
        lastnode->next = NULL;
}


// Delete At Given Position
void DeleteGivenPosition(node* &head, int idx){
    if(idx == 1){   // FOR fIRST pOSITION
        node* tmp = head->next;
        delete[] head;
        head = tmp;
    }
    else{      // FOR oTHER pOSITION
        int count = 1;
        node* temp = head;
        while(count < idx-1){
            count++;
            temp = temp->next;
        }
        node *tmp = temp->next->next;
        delete[] temp->next;  // Free THE NODE
        temp->next = tmp;
    }
}

// Delete By Value Of First Occurence
void DeleteValue(node* &head, int val){

    if(head->data == val){
        node* tmp = head->next;
        delete[] head;
        head = tmp;
    }

    else{
    node* temp = head;
    while(temp->next->data != val){
       temp = temp->next;
    }
    node *tmp = temp->next->next;
        delete[] temp->next;  // Free THE NODE
        temp->next = tmp;
    }
    
}

int main(){
 
 node *Node1 = new node(20);
 node *Node2 = new node(10);
 Node1->next = Node2;

 insertAtStart(Node1, 54);
 InsertAtLast(Node1, 98);
 insertAtPos(Node1, 3, 85);
 insertAtPos(Node1, 1, 985);
//  DeleteStart(Node1);
//  DeleteStart(Node1);
 DeleteLast(Node1);

// delete[] Node2;
// Node1->next = NULL;
DeleteGivenPosition(Node1, 5);
DeleteValue(Node1,85);

 
 print(Node1);

    
 
return 0;
}