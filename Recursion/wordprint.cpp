#include<iostream>
using namespace std;
string arr[]={"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
void wordprint(int n){
    //base
    if(n==0){
        return;
    }
    //rec 
    wordprint(n/10);
    int index=n%10;
    cout<<arr[index]<<" "; //Two Zero Four Eight 
}
int main(){
    int n;
    cin>>n; //2048
    wordprint(n);
    return 0;
}