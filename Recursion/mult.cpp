#include<iostream>
using namespace std;
int mult(int a, int b){
    //base
    if(b==0){
        return 0;
    }
    //rec 
    return a+mult(a,b-1);
}
int main(){
   int a,b;
   cin>>a>>b; //3 4
  cout<<mult(a,b)<<endl;;//12
return 0; 
}

