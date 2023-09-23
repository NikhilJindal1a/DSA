#include<iostream>
using namespace std;
void waveprint(int arr[3][4], int tr, int tc){
    for(int colno=0; colno<=tc-1; colno++){
        if(colno%2==0){
            //if colno is even-->downword
            for(int rowno=0; rowno<=tr-1; rowno++){
                cout<<arr[rowno][colno]<<" ";
            }
        }
        else{
            //if colno is old-->upward
            for(int rowno=tr-1; rowno>=0; rowno--){
                cout<<arr[rowno][colno]<<" ";
            }
        }
    }
}
int main(){
    int arr[3][4]={
        {3,4,1,5},
        {6,7,2,8},
        {9,0,2,3}
    };
    waveprint(arr,3,4);
    return 0;
}
//3 6 9 0 7 4 1 2 2 3 8 5 