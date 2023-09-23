#include<iostream>
using namespace std;
int lengthofarr(char arr[100]){
    int i=0;
    while(arr[i]!=0){
        i++;
    }
    return i;
}
void reverse(char arr1[100]){
    int i=0;
    int j=lengthofarr(arr1)-1;
    while(i<j){
        swap(arr1[i],arr1[j]);
            i++;
            j--;
    }
}
int main(){
    char arr1[100];
    cin.getline(arr1, 100);//he llo
    reverse(arr1);
    cout<<arr1<<endl;
    return 0;
}