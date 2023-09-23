#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int d){
        data=d;
        next=NULL;
    }
};

class queue{
    node* head;
    node* tail;
    int len;
    public:
    queue(){
        head=NULL;
        tail=NULL;
        len=0;
    }
    //push insert at tail
    void push(int d){
    node*n=new node(d);
    if(head==NULL){
        head=tail=n;
    }
    else{
        tail->next=n;
        tail=n;
    }
    len++;
    }
    //pop delete at head
    void pop(){
        if(head==NULL){
            return;
        }
        else if(head->next==NULL){
            delete head;
            head=NULL;
            tail=NULL;
            len--;
        }
        else{
            node*n=head;
            head=head->next;
            delete n;
            len--;
        }
    }
    //front
    int front(){
        return head->data;
    }
    //empty
    bool empty(){
        return head==NULL;
    }
    //size
    int size(){
        return len;
    }
};

int main(){
    queue q;
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