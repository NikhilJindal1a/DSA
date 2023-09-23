#include<iostream>
using namespace std;
int sumofdigits(int n){
    //base case
    if(n==0){
        return 0;
    }
    //rec case
    return sumofdigits(n/10)+n%10;
}
int main(){
    int n;
    cin>>n;//111
    cout<<sumofdigits(n)<<endl;//3
    return 0;
}