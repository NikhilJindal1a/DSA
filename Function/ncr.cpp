#include<iostream>
using namespace std;
int fact(int a){
    int ans = 1;
    int i=a;
    while(i>=1){
        ans=ans*i;
        i=i-1;
      }
      return ans;
    }
  int ncr(int n, int r){
            int ncr=fact(n)/(fact(r)*fact(n-r));
            return ncr;
  }
int main(){
    int n,r;
    cin >>n>>r;
    cout<<ncr(n,r)<<endl;
    return 0;
}