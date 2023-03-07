/******************this Keyword******************
 * this pointer holds the current objects address  in the single words , 
 * this pointer points to the class's current object.
 * 
 * There can be three main usages of this keyword in c++ :
 * 
 * o It can be used to pass the current object as a parameter to another method.
 * o It can be used to refer to a current class instance variable.
 * o It can be used to declare indexers.
 * 
 * 
*/

#include <iostream>
#include <string>
using namespace std;

class Employee{
    public :
     int id;
     string name;
     float salary;

     Employee(int id, string name, float salary){
        this->id = id;
        this->name = name;
        this->salary = salary;
     }

     void display(){
        cout<<id<<"  "<<name<<"  "<<salary<<endl;
    }
};
 
int main(){
 
    Employee e1 = Employee(101, "Vikash", 75000.00);
    Employee e2 = Employee(102, "Vishal", 85000.00);

    e1.display();
    e2.display();
 
return 0;
}