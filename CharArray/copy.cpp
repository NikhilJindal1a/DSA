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
    char arr1[100];
    char arr2[100];
    cin.getline(arr2,100);//coding
    copy(arr1,arr2);
    cout<<arr1<<endl;
    cout<<arr2<<endl;
}