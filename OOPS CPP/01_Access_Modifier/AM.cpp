/*****************Access Modifier*****************
Private:
Public:
Protected:

by default Private

*/

#include <iostream>
#include <string>
using namespace std;

class Demo{
    // Default behave like private
    string name1;
    double price1;

    private:
    string name2;
    double price2;

    public:
    string name3;
    double price3;

    protected:
    string name4;
    double price4;
};

int main(){


    return 0;
}


// Done
