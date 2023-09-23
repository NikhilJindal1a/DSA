#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(5);
    q.push(7);
    q.push(59);
    q.push(47);
    cout<<q.front()<<endl;//5
    cout<<q.empty()<<endl;//0
    cout<<q.size()<<endl;///4
    while(!q.empty()){
        cout<<q.front()<<" "; //5 7 59 47 
        q.pop();
    }
    cout<<endl;
}