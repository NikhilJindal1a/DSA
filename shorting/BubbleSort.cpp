#include<iostream>
using namespace std;
int main(){
    int arr[]={5,4,3,2,1};
    int tb=sizeof(arr)/sizeof(int);
    for(int j=0; j<=tb-2; j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
    //4 3 2 1 5
    for(int j=0; j<=tb-3; j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
    //3 2 1 4 5
    for(int j=0; j<=tb-4; j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
    //2 1 3 4 5
    for(int j=0; j<=tb-5; j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
    //1 2 3 4 5
    for(int i=0; i<=tb-1; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}