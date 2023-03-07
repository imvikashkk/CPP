#include <iostream>
using namespace std;
 
void fuct(int step, int des){

    /* Base Case */
    if(step==des){
        return ;
    }

    /* Processing */
    cout<<"Step "<<step<<" Sorce 0 to "<<des<<" destination "<<endl;
    step++;

    /* Recursive Relation */
    fuct(step,des);

}

int main(){
 
    cout<<"Enter You Destination : ";
    int des;
    cin>>des;
    int src = 0;
    fuct(src,des);
 
return 0;
}