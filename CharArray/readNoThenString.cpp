#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;//9
    cin.ignore();
    char arr[100];
    cin.getline(arr,100);//hello
    cout<<n<<endl;
    cout<<arr<<endl;
    return 0;
}