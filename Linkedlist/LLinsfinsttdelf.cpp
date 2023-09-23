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
void insertatfront(node* &head, node* &tail, int d){
    //if LL is empty
    if(head==NULL){
        node*p=new node(d);
        head=p;
        tail=p;
    }
    //agar LL is not empty
    else{
        node*p=new node(d);
        p->next=head;
        head=p;
    }
}
void insertattail(node* &head, node* &tail, int d){
    //if LL is empty
    if(head==NULL){
        node*p=new node(d);
        head=p;
        tail=p;
    }
    //LL is not empty
    else{
        node*p=new node(d);
        tail->next=p;
        tail=p;
    }
}
void deleteatfront(node*&head, node*&tail){
    //LL is nill
    if(head==NULL){
        return;
    }
    //LL has only 1 node
    else if(head->next==NULL){
        delete head;
        head=NULL;
        tail=NULL;
    }
    //LL has many node
    else{
        node*temp=head->next;
        delete head;
        head=temp;
    }
}
void printLL(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    node*head=NULL;
    node*tail=NULL;
    insertatfront(head,tail,2);
    insertatfront(head,tail,3);
    insertatfront(head,tail,9);
    insertatfront(head,tail,6);
    printLL(head);//6 9 3 2
    insertattail(head,tail,18);
    printLL(head);//6 9 3 2 18
    deleteatfront(head,tail);
    printLL(head);//9 3 2 18
    return 0;
}