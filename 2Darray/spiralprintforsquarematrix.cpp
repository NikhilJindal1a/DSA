#include<iostream>
using namespace std;
void spiralprint(int arr[4][4], int tr, int tc){
    int sc=0;
    int sr=0;
    int ec=tc-1;
    int er=tr-1;
    while(sc<=ec and sr<=er){
        //for firsr row
        for(int i=sc; i<=ec; i++){
            cout<<arr[sr][i]<<" ";
        } //3 4 1 5
        sr++;
        //for last col
        for(int j=sr; j<=er; j++){
            cout<<arr[j][ec]<<" ";
        }//8 3 2
        ec--;
        //for lasr row
        for(int k=ec; k>=sc; k--){
            cout<<arr[er][k]<<" ";
        }//3 4 5
        er--;
        //for firsr row
        for(int l=er; l>=sr; l--){
            cout<<arr[l][sc]<<" ";
        }//9 6
        sc++;
    }
}
int main(){
    int arr[4][4]={
        {3,4,1,5},
        {6,7,2,8},
        {9,0,2,3},
        {5,4,3,2}
    }; //3 4 1 5 8 3 2 3 4 5 9 6 7 2 2 0
    spiralprint(arr,4,4);
    cout<<endl;
    return 0;
}