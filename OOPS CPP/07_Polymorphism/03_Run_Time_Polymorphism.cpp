/************************************Run_Time_Polymorphism*********************************
 * Runtime polymorphism is also known ass dynamic polymorphism, Method Overriding is a way to
 * implement runtime polymorphism.
 * 
 * a) METHOD OVERRIDING :-
 * Method overriding is a feature that allows you to redefine the parent class method in the 
 * child class based on its requirment. In other words, whatever methods the parent class has by
 * default are available in the child class. But, sometimes, a child class may not be satisfied 
 * with parent class method implemetation. The child class is allowed to redefine that method 
 * based on its requirments. This process is called  metod overriding.
 * 
 * Rules for method overriding :-
 * o The method of the parent class and the method of the child class must have the same name.
 * o The method of the parent class and the method of the child class must have same parameters.
 * o It is possible through inheritance only.
 * o Return_Type can be different.
 * 
*/

#include <iostream>
using namespace std;

class Parent{
    public:
      void show(){
        cout<<"Inside Parent Class."<<endl;
      }
};

class subclass1 : public Parent{
    public :
       void show(){
        cout<<"Inside Subclass1."<<endl;
       }
};

class subclass2 : public subclass1{
    public :
      int show(){
        cout<<"Inside Subclass2."<<endl;
        return 0;
      }
};

int main(){
    Parent ob;
    subclass1 ob1;
    subclass2 ob2;

    ob.show();
    ob1.show();
    ob2.show();
    
return 0;
}