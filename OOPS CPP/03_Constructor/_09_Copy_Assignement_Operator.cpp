/************************************_Copy_Assignment_Operator_**********************************
 * obj2=obj1;
*/

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


 Hero hero2 = hero1;   // copying
 hero2.print();

 hero1.name[0] = 'B';    
 hero2.print();
 hero1.print();
 
return 0;
}