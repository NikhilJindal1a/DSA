#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={5,6,4,3,8,9,5,5,0};
    int n=sizeof(arr)/sizeof(int);
    //sort(arrayname,arrayname+noofelement);
    sort(arr,arr+n);
    for(int i=0; i<n; ++i){
        cout<<arr[i]<<" ";//0 3 4 5 5 5 6 8 9 
    }
    cout<<endl;
}

