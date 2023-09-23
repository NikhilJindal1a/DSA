//pos 1 2 3 4 5 6 7....
//fib 0 1 1 2 3 5 8....
#include<iostream>
using namespace std;
int fibo(int pos){
    //base
    if(pos==1){
        return 0;
    }
    if(pos==2){
        return 1;
    }
    
    //rec 
    return fibo(pos-1)+fibo(pos-2);
}
int main(){
    int pos;
    cin>>pos;//5
    cout<<fibo(pos)<<endl;//37
    return 0;
}