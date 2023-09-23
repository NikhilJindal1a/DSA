#include<iostream>
using namespace std;
int sumofele(int arr[], int n){
    //base
    if(n==0){
        return 0;
    }
    //rec 
    return sumofele(arr,n-1)+arr[n-1];
}

int sumofele2(int arr[], int n){
    //base
    if(n==0){
        return 0;
    }
    //rec
    return sumofele2(arr+1,n-1)+arr[0];
}

int sumofele3(int arr[], int n, int i){
    //base
    if(i==n){
        return 0;
    }
    //rec
    return sumofele3(arr,n,i+1)+arr[i];
}
int main(){
    int arr[]={3, 4, 1, 2};
    int n=4;
    cout<<sumofele(arr,n)<<endl;
    cout<<sumofele2(arr,n)<<endl;
    cout<<sumofele3(arr,n,0)<<endl;
    return 0;
}