#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node * next;
    node(int d){
        data=d;
        next=NULL;
    }
};
int main(){
    node x(9);
    node y(3);
    x.next=&y;
    cout<<x.data<<endl;
    cout<<x.next<<endl;
    cout<<x.next->data<<endl;
    cout<<x.next->next<<endl;
    cout<<(*x.next).data<<endl;
    cout<<(*x.next).next<<endl;
    return 0;
}