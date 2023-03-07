/*
The functions associated with stack are: 
empty() – Returns whether the stack is empty – Time Complexity : O(1) 
size() – Returns the size of the stack – Time Complexity : O(1) 
top() – Returns a reference to the top most element of the stack – Time Complexity : O(1) 
push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1) 
pop() – Deletes the most recent entered element of the stack – Time Complexity : O(1) 
*/

#include <iostream>
#include <stack>         // Header File For Stack STL
using namespace std;

void print(auto k){          // stack<int> k;
    while(!(k.empty())){         // empty()  0,1
        cout<<k.top()<<" ";      // top()
        k.pop();
    }cout<<endl;
}
 
int main(){
 
    // Creation Of Stack Data Structure
    // stack<dataType> name;
    stack<int> k;
    // insert data;
    k.push(10);
    k.push(20);
    k.push(30);

    print(k);

    // remove the top data
    k.pop();
    k.pop();

    print(k);
    
    cout<<k.top();
    // size of data
    cout<<"Size of data : "<<k.size();


 
return 0;
}