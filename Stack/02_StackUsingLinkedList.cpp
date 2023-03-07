#include <iostream>
using namespace std;


// Creating a LInkedList
class node{
    public :
    int data;
    node* link;

    // Constructor
    node(int data){
        this->data = data;
        this->link = NULL;
    }
};


// Creating Stack
class Stack{
    node* top;
    int sz;

    public :
    Stack(){
        top = NULL;
        sz = 0;
    }

    void push(int data){
        node* temp = new node(data);
        if (!temp) {  // Check if heap memory of stack is full.Then inserting an element would lead to stack overflow
            cout << "\nStack Overflow";
            exit(1);
        }
        temp->data = data;
        temp->link = top;
        top = temp;
        sz++;
    }

    void pop(){
        node *temp;
        if(top == NULL){
            cout<<"STACK UNDERFLOW "<<endl;
            exit(1);
        }
        else{
            temp = top;
            top = top->link;
            free(temp);  // Release memory of top node. i.e delete the node
            sz--;
        }
    }

    bool empty(){
        return top==NULL;
    }

    int peek(){
        if(!empty()){
            return top->data;
        }
        else{
            cout<<"NO DATA";
            exit(1);
        }
    }


    int size(){
        return sz;
    }

    void print(){
        if(top == NULL ){
            cout<<"Empty Stack "<<endl;
            exit(1);
        }
        else{
            node *temp_top = top;
            while(temp_top != NULL){
                cout<<temp_top->data<<" ";
                temp_top = temp_top->link;
            }cout<<endl;
        }
    }
    
};

int main(){

Stack k;

k.push(45);
k.push(25);
k.print();

k.pop();
k.print();
k.pop();
k.print();

return 0;
}