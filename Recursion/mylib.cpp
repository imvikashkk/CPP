#include <iostream>
#include <string>
#include <cctype>
using namespace std;
 

int* arr_str_int(int& j){

    string str;
    cout<<"Enter The Elements : ";
    getline(cin,str);

    int adder = 0;
    int *arr = new int[str.size()];
    int space = 0; 
    int error = 0;

    for(int i=0; i<=str.size(); i++){
        int y = i;
        if(isdigit(str[i])){
             int itgr = str[i] - '0';
             adder = adder*10 + itgr;
             space = 1; 
        }
        else if(isalpha(str[i]) == false && ispunct(str[i]) == false){
            if(space == 1){
                arr[j] = adder;
                j++;
            }
            adder = 0;
            space = 0;
        }
        else{
            error = 1;
        }
        
    }

    if(error == 1){
        cout<<"\n\n\t\t<SOME ERROR OCCURED PLEASE ENTER ONLY INTEGER>\n\n\n";
    }

    cout<<"\n\n\tYour array is : ";
    for(int i=0; i<j; i++){
        cout<<arr[i]<<" ";
    }
 
return arr;

}
