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
        this->arr = new int[sz];
        this->mxSize = sz;
        this->first = -1;
        this->back = -1;
    }

    // Functions 
    bool isempty(){
        if(first == -1 && back == -1){
            return true;
        }
        else{
            return false;
        }
    }

    bool isfull(){
        if(back == mxSize-1){
            return true;
        }
        else{
            return false;
        }
    }

    int size(){
        return (back+1);
    }

    void enqueue(int data){
        if(isfull()){
            cout<<"Queue is OVERFLOW ! "<<endl;
            exit(1);
        }
        else if(isempty()){
            first++;
            back++;
            arr[back] = data;
        }else{
            back++;
            arr[back] = data;
        }
    }

    int dequeue(){
        if(isempty()){
            cout<<"Queue is UNDERFLOW !"<<endl;
            exit(1);
        }else if(back == 0 && first == 0){
            int temp = arr[back]; 
            first--;
            back--;
            return temp;
        }else{
            int temp = arr[back];
            for(int i=first+1; i<=back; i++){   // Memory Utilization but time complexity is O(n)
                arr[i-1] = arr[i];
            }
            back--;
            return temp;
        }
    }

    int front(){
        return arr[first];
    }

    int rear(){
        return arr[back];
    }

    int at(int idx){
        if(idx >= first && idx <=back){
            return arr[idx];
        }else{
            cout<<"Out Of Range !";
            exit(1);
        }
    }


};
 
int main(){
 
queue q(5);

q.enqueue(10);
q.enqueue(11);
q.enqueue(12);
q.enqueue(13);


cout<<q.front()<<endl;
cout<<q.at(2);

 
return 0;
}