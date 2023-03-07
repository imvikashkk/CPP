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






// Insertion AT Beginning by head
void insertAtStart(node* &head, int val){
    node* temp = new node(val);
    temp->next = head;
    head->prev = temp;
    head = temp;
}






// Insert At Last
void insertAtLast(node* &head, int val){
    node* temp = new node(val);
    if(head == NULL){
        head = temp;
    }
    else{
        node* lastnode = head;
        while(lastnode->next != NULL){
            lastnode =  lastnode->next;
        }
        temp->prev = lastnode;
        lastnode->next = temp;

    }
}






// Insertion at given position
void insertAtPos(node* &head, int idx, int val){
    node *tmp = new node(val);
    node *temp = head;

    if(idx == 1){   // FOR fIRST pOSITION
        tmp->next = head;
        head->prev = tmp;
        head = tmp;
    }
    else{      // FOR OTHER POSITION
        int count = 1;
        while(count < idx-1){
            count++;
            temp = temp->next;
        }
        node* lasttemp = temp->next;
        temp->next = tmp;
        lasttemp->prev = tmp;
        tmp->next = lasttemp;
        tmp->prev = temp;
    }
}





// Length of LinkedList
int getLength(node* head){
    int count =0;
    while(head != NULL){
        count++;
        head = head->next;
    }
    return count;
}





// Traverse
int print(node *head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
        cout<<head->prev->data<<endl;
    }cout<<endl;
}





// Delete First Node
void DeleteFirst(node* &head){
    node* temp = head -> next;
    delete[] head;   // Free The Memory
    head = temp;
    head->prev = NULL;
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
        node* temp = head -> next;
        delete[] head;   // Free The Memory
        head = temp;
        head->prev = NULL;
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
        tmp->prev = temp;
    }
}





int main(){
    node* Node1 = new node(10);
    node* Node2 = new node(20);
    node* Node3 = new node(30);

    Node1->next = Node2;
    Node2->prev = Node1;
    Node2->next = Node3;
    Node3->prev = Node2;

    insertAtPos(Node1, 3, 79);
    DeleteLast(Node1);
    DeleteLast(Node1);
    print(Node1);
    cout<<"length of LinkedList is "<<getLength(Node1);
    
return 0;
}