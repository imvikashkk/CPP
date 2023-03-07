/*
empty()	Returns whether the queue is empty.
size() 	Returns the size of the queue.
top()	Returns a reference to the topmost element of the queue.
push() 	Adds the element ‘g’ at the end of the queue.
pop()	Deletes the first element of the queue.
swap()	Used to swap the contents of two queues provided the queues must be of the same type, although sizes may differ.
emplace()	Used to insert a new element into the priority queue container.

priority_queue value_type 	Represents the type of object stored as an element in a priority_queue.
                            It acts as a synonym for the template parameter.
*/


#include <iostream>
#include <queue>
using namespace std;
 
int main(){
 
    priority_queue<int> p1 ;       // eg. 10 9 8 7 6 5 4 3 2 1
    priority_queue<int, vector<int>, greater<int>> p2; // eg. 1 2 3 4 5 6 7 8 9 10
 
return 0;
}