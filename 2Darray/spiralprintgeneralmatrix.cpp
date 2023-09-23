#include<iostream>
using namespace std;
void spiralprint(int arr[3][4], int tr, int tc){
    int sc=0;
    int sr=0;
    int ec=tc-1;
    int er=tr-1;
    while(sc<=ec and sr<=er){
        //1 row
        for(int i=sc; i<=ec; i++){
            cout<<arr[sr][i]<<" ";
        }
        sr++;
        //last col
        for(int j=sr; j<=er; j++){
            cout<<arr[j][ec]<<" ";
        }
        ec--;
        if(sr<=er){
            //last row
        for(int k=ec; k>=sc; k--){
            cout<<arr[er][k]<<" ";
        }
        er--;  
        }
      if(sc<=ec){
          //first row
        for(int l=er; l>=sr; l--){
            cout<<arr[l][sc]<<" ";
        }
        sc++; 
      }
       
    }
}
int main(){
    int arr[3][4]={
        {3,4,1,4},
        {6,7,2,3},
        {9,0,2,3}
    }; //3 4 1 4 3 3 2 0 9 6 7 2 
    spiralprint(arr, 3, 4);
    cout<<endl;
    return 0;
}