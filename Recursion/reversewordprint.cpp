#include<iostream>
using namespace std;
string arr[]={"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
void reversewordprint(int n){
    //base
    if(n==0){
        return;
    }
    //rec
    int index = n%10;
    cout<<arr[index]<<" "; //Four Three Two One
    reversewordprint(n/10);
}
int main(){
    int n;
    cin>>n;//1234
    reversewordprint(n);
    return 0;
}