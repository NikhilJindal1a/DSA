#include<iostream>
using namespace std;
int main(){
    int arr[]={5,4,3,2,1};
    int tb=sizeof(arr)/sizeof(int);
    int i;
    for( i=0; i<=tb-2; i++){
         for(int j=0; j<=tb-2-i; j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
    }
    for(int i=0; i<=4; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}