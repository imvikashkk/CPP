#include <iostream>
using namespace std;

class Stack{
    public :
    // Poperties :
    int Size;
    int top;
    int temp_top;
    int *arr;

    // Behaviour Constructor : 
    Stack(int size){
        this->Size = size;
        arr = new int[size];
        top = -1;
        temp_top = -1;
    }

    // Functions : 
    void push(int data){       // O(1)
        if(Size-top > 1){
            top++;
            temp_top++;
            arr[top] = data;
        }
        else{
            cout<<"Stack OverFlow : Size should be "<<Size<<endl;
            exit(1);
        }
    }

    void pop(){               // O(1)
        if(top >= 0){
            top--;
            temp_top--;
        }else{
            cout<<"Stack UnderFlow : Size should be > 0 "<<endl;
            exit(1);
        }
    }

    bool empty(){             // O(1)
        if(top == -1){
            return 1;
        }
        else{
            return 0;
        }
    }

    int peek(){         // O(1)
        if(top >= 0 && top < Size){
            return arr[top];
        }else{
            cout<<"Stack is Empty "<<endl;
            return -1;
        }
    }

    int size(){     // O(1)
        return (top+1);
    }

    
    void print(){     // O(n)   n=temp_top
        cout<<endl;
        while(temp_top >= 0){
            cout<<arr[temp_top]<<" ";
            temp_top--;
        }cout<<endl;
    }

};





 
int main(){
 
 Stack k(9);  // 9 is max size of stack

 k.push(10);
 k.push(20);
 k.push(-56);
 k.push(-87);
 k.push(-43);
 k.push(10);
 k.push(20);
 k.push(-56);
 k.push(-87);
 k.push(-43);
 k.push(87);

 k.print();



 
return 0;
}