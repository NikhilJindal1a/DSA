#include<iostream>
using namespace std;
int fact(int n){
    //base case
    if(n==0){
        return 1;
    }
    
    
    //rec case
    return n*fact(n-1);
}
int main(){
    int n;
    cin>>n;//5
    cout<<fact(n)<<endl; //120
    return 0;
}