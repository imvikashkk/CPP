#include <iostream>
using namespace std;

class queue{
    public :
    int *arr;
    int first;
    int back;
    int mxSize;

    // Constructor
    queue(int sz){
        arr = new int[sz];
        mxSize = sz;
        first = -1;
        back = -1;
    }

    //  isempty Function
    bool isempty(){
        if(first == -1 && back == -1){
            return true;
        }
        else{
            return false;
        }
    }


    // isfull()  Function
    bool isfull(){
        if((back+1)%mxSize == first){
            return true;
        }
        else{
            return false;
        }
    }


    // Size Function
    int size(){
        if(first == -1 && back ==-1){
            return 0;
        }else{
           return (back-first)+1;
        }
    }

    // Enquque In Circular Queue
    void enqueue(int data){
        if(isfull()){   // back+1)%mxSize == first
            cout<<"CircularQueue is OVERFLOW ! ";
            exit(1);
        }
        else if(back ==-1 && first == -1){
            first++;
            back++;
            arr[back] = data;
        }else {
            back = (back+1)%mxSize;
            arr[back] = data;
        }
    }


    // Dequeue In Circular Queue
    int dequeue(){
        if(isempty()){
            cout<<"Queue is UNDERFLOW !"<<endl;
            exit(1);
        }else if(back == first){  
            int temp = arr[first];
            first--;
            back--;
            return temp;
        }else{
            int temp = arr[first]; 
            first = (first+1)%mxSize;
            return temp;
        }
    }

    //  return first Element
    int front(){
        return arr[first];
    }

    // return last Element
    int rear(){
        return arr[back];
    }


    // Display the queue
    void display(){
        if(first == -1 && back == -1){
            cout<<"Empty Circular Queue ! "<<endl;
            exit(1);
        }else{
            int i = first;
            cout<<"Circular Queue Is : ";
            while(i != back){
                cout<<arr[i]<<" ";
                i = (i+1)%mxSize;
            }cout<<arr[back]<<endl;
        }
    }

   


};
 
int main(){
 
queue q(4);

q.enqueue(10);
q.enqueue(11);
q.dequeue();
q.enqueue(12);
q.enqueue(13);
q.enqueue(14);


cout<<q.front()<<endl;
q.display();


 
return 0;
}