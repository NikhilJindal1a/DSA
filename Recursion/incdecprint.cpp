#include<iostream>
using namespace std;
void decprint(int n){
    //base case
    if(n==0){
        return;
    }
    //rec case
    cout<<n<<" ";
    decprint(n-1);
}

void incprint(int n){
    //base case
    if(n==0){
        return;
    }
    //rec case
    incprint(n-1);
    cout<<n<<" ";
}

int main(){
    int n;
    cin>>n;
    decprint(n);
    cout<<endl;
    incprint(n);
    return 0;
}