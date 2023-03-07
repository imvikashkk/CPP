#include <iostream>
using namespace std;

class node{
    public :
    int root;
    node* left;
    node* right;
};

void displayPreOrder(node *head){

    if(head == NULL){
        return;
    }
    cout<<head->root<<" ";
    displayPreOrder(head->left);
    displayPreOrder(head->right);
    
}

int main(){
 
    node* head = new node();
    node* h1 = new node();
    node* h2 = new node();
    node* h3 = new node();
    node* h4 = new node();
    node* h5 = new node();
    node* h6 = new node();

    head->root = 0;
    h1->root = 10;
    h2->root = 20;
    h3->root = 30;
    h4->root = 40;
    h5->root = 50;
    h6->root = 60;

    head->left = h1;
    head->right = h2;


    
    h1->left = h3;
    h1->right = h4;

    
    h2->left = h5;
    h2->right = h6;

    
    h3->left =  NULL;
    h3->right = NULL;

    
    h4->left =  NULL;
    h4->right = NULL;

    
    h5->left =  NULL;
    h5->right = NULL;

    
    h6->left =  NULL;
    h6->right = NULL;

    displayPreOrder(head);




 
return 0;
}