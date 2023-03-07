/*****************Constructor Chaining / Delegating Constructor******************
 * C++ 11 allow sconstructor chaining (partially). This feature is called "Delegating Constructiors".
 * So in c++ 11, sometimes it is useful for a constructor to be able to call another constructor of
 * the same class. This feature called constructor Delegation.
 * 
 * 
*/
#include <iostream>
using namespace std;

class A{
    
    public :
    int sum = 0;

    A(int x, int y){
        cout<<"Constructor First "<<endl;
        A(x, y, x+y);
    }
    A(int x, int y, int z){
        cout<<"Constructor Second "<<endl;
        A(x,y,z,x+y+z);

    }
    A(int w, int x, int y, int z){
        cout<<"Constructor Third "<<endl;
        sum = w+x+y+z;
        cout<<"Sum is : "<<sum<<endl;
    }
};


 
int main(){
 
    A rf(10,20);

 
return 0;
}