#include <iostream>
using namespace std;

int main(){
    int row,col;
    cout<<"Enter the size of 2D array m x n : ";

    cin>>row>>col;
   
    // int arr[row][col]     // BAD Practice beacuse of static memory

    ///////////                    Correct                  ///////////
/*****************************************************************************/
    int **arr = new int*[col];  
    for(int i=0; i<col; i++){
        arr[i] = new int[row];   
    } // 2D array creation Done
/*****************************************************************************/

   cout<<"Enter the elements of 2d array : "<<endl;
   for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
   }
   cout<<"Elements of the array : "<<endl;
   for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
   }
    return 0;
}