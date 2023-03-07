/*********************************************Deep Copy*****************************************
 * An object is created by copying all the fields an it also allocates similar memory 
 * resources with the same value to the object . To perform Deep copy. we need to explicitly
 * define the copy constructor and assign dyanmic memory as well if required also, it is neccessory
 * to allocate memory to the other constructors variables dynamically. 
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
        cout<<"Simple Constructor"<<endl;
    }

    Hero(Hero& ob){
        char *ch = new char[strlen(ob.name)+1];
        strcpy(ch, ob.name);
        this->name = ch;

        this->health = health;
        this->level = level;

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