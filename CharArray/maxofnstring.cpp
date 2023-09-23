#include<iostream>
using namespace std;
int lengthofarr(char arr[100]){
    int i=0;
    while(arr[i]!='\0'){
        i++;
    }
    return i;
}
void copy(char arr1[100], char arr2[100]){
    int i=0;
    int j=0;
    while(j<=lengthofarr(arr2)){
        arr1[i]=arr2[j];
        i++;
        j++;
    }
    
}
int main(){
    int n;
    cin>>n;//4
    cin.ignore();
    char arr1[100];
    cin.getline(arr1,100);//ear
    char maxstring[100];
    copy(maxstring,arr1);
    int mlen=lengthofarr(arr1);
    
    for(int i=1; i<=n-1; i++){
        char arr1[100];
        cin.getline(arr1,100);// table elephant pen
        if(lengthofarr(arr1)>mlen){
            copy(maxstring,arr1);
            mlen=lengthofarr(arr1);
        }
    }
    cout<<"max string is "<<maxstring<<endl;
    cout<<" max length is "<<mlen<<endl;
    return 0;
}