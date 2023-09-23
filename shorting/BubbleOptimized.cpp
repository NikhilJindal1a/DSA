#include<iostream>
using namespace std;
int main(){
    int arr[]={5,1,2,3,4};
    int tb=sizeof(arr)/sizeof(int);
    for(int i=0; i<=tb-2; i++){
        cout<<i<<endl;
        bool isswap=false;
        for(int j=0; j<=tb-2-i; j++){
            if(arr[j]>arr[j+1]){
              swap(arr[j],arr[j+1]);
              isswap=true;
            }
        }
        if(isswap==false){
            break;
        }
    }
    for(int i=0; i<=tb-1; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}