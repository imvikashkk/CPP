/*
    Algorithm Postorder(tree)

        Traverse the left subtree, i.e., call Postorder(left->subtree)
        Traverse the right subtree, i.e., call Postorder(right->subtree)
        Visit the root

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


// PostOrder Traversal Using Recursion
void PostOrderRecur(node* head){

    // Base Case
    if(head == NULL){
        return;
    }

    // recursive call to left of node
    PostOrderRecur(head->left);

    // recursive call to right of node
    PostOrderRecur(head->right);

    // print root of node;
    cout<<head->root<<" ";

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


// Calling the PostOrder Function to Display
cout<<"PostOrder Traversal : ";
PostOrderRecur(h1);


// OUTPUT :
// PostOrder Traversal : 40 50 20 60 70 30 10
 
return 0;
}