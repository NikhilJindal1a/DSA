#include<iostream>
using namespace std;
void formxomatrix(char arr[100][100], int tr, int tc){
    int sc=0;
    int sr=0;
    int ec=tc-1;
    int er=tr-1;
    char ch='X';
    while(sc<=ec and sr<=er){
        //first row
        for(int i=sc; i<=ec; i++){
            arr[sr][i]=ch;
        }
        sr++;
        //for last col
        for(int j=sr; j<=er; j++){
            arr[j][ec]=ch;
        }
        ec--;
        //for lasr row
        for(int k=ec; k>=sc; k--){
            arr[er][k]=ch;
        }
        er--;
        //for first row
        for(int l=er; l>=sr; l--){
            arr[l][sc]=ch;
        }
        sc++;
        if(ch=='X'){
            ch='O';
        }
        else{
            ch='X';
        }
    }
}
int main(){
    char arr[100][100];
    int tr,tc;
    cin>>tr>>tc;
    formxomatrix(arr,tr,tc);
    for(int i=0; i<=tr-1; i++){
        for(int j=0; j<=tc-1; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}