/*
The functions associated with queue are: 
1 empty()	Returns whether the queue is empty. It return true if the queue is empty otherwise
            returns false.
2 size()	Returns the size of the queue.
3 swap()	Exchange the contents of two queues but the queues must be of the same data type,
            although sizes may differ.
4 emplace()	Insert a new element into the queue container, 
            the new element is added to the end of the queue.
5 front()	Returns a reference to the first element of the queue.
6 back()	Returns a reference to the last element of the queue.
7 push(g) 	Adds the element ‘g’ at the end of the queue.
8 pop() 	Deletes the first element of the queue.

All Function : Time Complexity O()
*/

#include <iostream>
#include <queue>
using namespace std;
 
int main(){
 
    // Creation Of Queue
    queue<int> q;
    q.push(20);
    q.push(10);
    q.push(0);
    q.push(-10);

    cout<<q.size()<<endl;
    cout<<q.front()<<" "<<q.back();
    q.pop();

    queue<int> qa;

    qa.push(30);
    qa.push(54);
    qa.push(32);

    // swapping the queue elements with another queue
    qa.swap(q);



return 0;
}