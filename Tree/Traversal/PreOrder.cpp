/*
algorithm Preorder(tree)

    Visit the root.
    Traverse the left subtree, i.e., call Preorder(left->subtree)
    Traverse the right subtree, i.e., call Preorder(right->subtree)

    Time Complexity: O(N)
    Auxiliary Space: If we don’t consider the size of the stack for function calls then O(1) 
                     otherwise O(h) where h is the height of the tree.  

*/


#include <iostream>
using namespace std;

// Creation Of Node
class node{
    public:
    int root;
    node* left;
    node* right;

    //Constructor
    node(int data){
        this->root = data;
        this->left = NULL;
        this->right = NULL;
    }
};


// PreOrder Traversal Using Recursion
void preOrderRecur(node* head){

    // Base Case
    if(head == NULL){
        return;
    }

    // print root of node;
    cout<<head->root<<" ";

    // recursive call to left of node
    preOrderRecur(head->left);

    // recursive call to right of node
    preOrderRecur(head->right);


}

int main(){

    /*  Example : Binary Tree
    
                    10                h1 
                  /    \
                 20    30          h2    h3
               /   \  /   \
             40    50 60  70    h4  h5  h6  h7
    
    
    */
 
 node* h1 = new node(10);
 node* h2 = new node(20);
 node* h3 = new node(30);
 node* h4 = new node(40);
 node* h5 = new node(50);
 node* h6 = new node(60);
 node* h7 = new node(70);

 h1->left = h2;
 h1->right = h3;

 h2->left = h4;
 h2->right = h5;

 h3->left = h6;
 h3->right = h7;

/* 

Not Requred Already Assigned

 h5->left = NULL;
 h5->right = NULL;

 h6->left = NULL;
 h6->right = NULL;

 h7->left = NULL;
 h7->right = NULL;

*/


// Calling the PreOrder Function to Display
cout<<"PreOrder Traversal : ";
preOrderRecur(h1);


// OUTPUT :
// PreOrder Traversal : 10 20 40 50 30 60 70 
 
return 0;
}