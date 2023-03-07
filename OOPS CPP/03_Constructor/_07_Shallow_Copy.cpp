/*******************************************Shallow Copy*********************************************
 * An object is created by copying all of the member field values. Here the pointer will be copied but
 * not the memory it points to. It means that the original object and the created copy will now point 
 * to the same memory address, which is generally not preferred. since both objects will reference the
 * same memory location , then changes made by one will reflect those changes in another object. Since 
 * we wanted to create a replica of the object . this pupose will not be filled by shallow copy.  
 * 
 * Note : The assignment Operator and the default copy constructor make a shallow copy.
*/


/******************************Default Copy Constructor*************************/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Hero{

    public :
      int health;
      char* name;
      char level;

    Hero(){
        cout<<"Simple Contructor Called"<<endl;
        name = new char[100];
    }

    void setName(char name[]){
        strcpy(this->name , name);
    }

    void setLevel(char level){
        this->level = level;
    }

    void setHealth(int health){
        this->health = health;
    }

    void print(){
        cout<<"Health : "<<health<<"  ||  Name : "<<name<<"  ||  Level : "<<level<<endl;
    }
};


int main(){
 
 Hero hero1;
 hero1.setHealth(10);
 hero1.setName("Vikash");
 hero1.setLevel('D');
 hero1.print();


 Hero hero2(hero1);
 hero2.print();

 hero1.name[0] = 'B';    
 hero2.print();
 hero1.print();
 
return 0;
}