/********************************************Copy Constructor**************************************
 * 
 * A copy constructor is a member function that initializes an object using another object of the same class. 
 * 
 * // In built cop constructor :
 * Sample obj2(obj1); //or obj2=obj1;
 * 
 * 
 * // manually created copy constructor
 * Sample(Sample &t)
          {
                     id=t.id;
          }
*/

/**********************************Default Copy Constructor*******************************/

// #include<iostream>
// using namespace std;
  
// class Sample
// {          int id;
//     public:
//     void init(int x)
//     {
//         id=x;    
//     }    
//     void display()
//     {
//         cout<<endl<<"ID="<<id;
//     }
// };
  
// int main()
// {
//     Sample obj1;
//     obj1.init(10);
//     obj1.display();
      
//     Sample obj2(obj1); //or obj2=obj1;   // Copying 

//     obj2.display();
//     return 0;
// }

/*********************************Manually Created Copy Constructo************************************/

#include <iostream>
using namespace std;

class A{
    public :
    int a;
    int b;

    A(){
        cout<<"Default Constructor"<<endl;
    }

    A(A& ob){
        this->a = ob.a;
        this->b = ob.b;
    }

    void show(){
        cout<<"a : "<<a<<endl;
        cout<<"b : "<<b<<endl;
        cout<<endl;
    }

};

int main(){
    A rf; 
    // A *rf = new rf();
    rf.a = 20;
    rf.b = 60;
    rf.show();

    // A s(rf);
    A *s = new A(rf);
    s->show();
    
}



// if we create manually copy construtor then in built copy constructor will be end.