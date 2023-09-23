#include<iostream>
using namespace std;
int l,k;
bool findkeyinamatrix(int arr[3][4], int tr, int tc, int key){
    for(int i=0; i<=tr-1; i++){
        for(int j=0; j<=tc-1; j++){
            if(arr[i][j]==key){
                l=i;
                k=j;
                cout<<key<<" is present at index "<<i<<" "<<j<<endl;
                return true;
            }
        }
    }
    return false;
}

int main(){
    int arr[3][4]={
        {3,4,1,5},
        {6,7,2,8},
        {9,0,2,3}
    };
    int tr=3;
    int tc=4;
    int key;
    cin>>key;
    if(findkeyinamatrix(arr,tr,tc,key)==true){
        cout<<key<<" is present at index "<<l<<" "<<k<<endl;
    }
    else{
        cout<<"key is not present"<<endl;
    }
    for(int i=0; i<=tr-1; i++){
        for(int j=0; j<=tc-1; j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    return 0;
}