#include <iostream>
using namespace std;
// self refrential class
class node{
public:
	int data;
	node*next;
	node(int d){
		data=d;
		next=NULL;
	}
};

void printll(node*head){
	node*temp=head;
// loop
	while(temp!=NULL){
		cout<<temp->data<<" ";
	temp=temp->next;//NULL
	}
	cout<<endl;
}

void insertattail(node*&head,node*&tail,int d){
	// if ll is khali
	if(head==NULL){
		node*p=new node(d);
		head=p;
		tail=p;
	}
	// if ll is not empty
	else{
		node*p=new node(d);
		tail->next=p;
		tail=p;
	}
}

node* reversell(node*head){
    node*prev=NULL;
    node*curr=head;
    while(curr!=NULL){
        node*ne=curr->next;
        curr->next=prev;
        prev=curr;
        curr=ne;
    }
    return prev;
}
int main(){
	node*head=NULL;
	node*tail=NULL;
	int m;//4
	cin>>m;
	for (int i = 0; i <m; ++i)
	{
		int d;
		cin>>d;
		insertattail(head,tail,d); //1 3 5 8
	}
	node*nhead=reversell(head);
	printll(nhead);
	return 0;
}