// stair 0  1  2  3  4  5
// ways  1  1  2  4  7  13
#include<iostream>
using namespace std;
int nstaircase(int n){
    //base case
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    //rec case
    return nstaircase(n-1)+nstaircase(n-2)+nstaircase(n-3);
}
int main(){
    int n;
    cin>>n; //5
    cout<<nstaircase(n)<<endl;//13
    return 0;
}