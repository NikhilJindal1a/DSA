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

// datatype*nameofptr;
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

// even ll  ist mid dedega
node* midpointofll(node*head){
	node*slow=head;
	node*fast=head->next;
	while(fast!=NULL and fast->next!=NULL){
	// while( fast->next!=NULL and fast!=NULL){
		fast=fast->next->next;//7 //seg fault
	slow=slow->next;
	}
	// return slow->data;
	return slow;
}

node* mergeintosinglesortedll(node*head1,node*head2){
	// ll 1 empty
	if(head1==NULL){
		return head2;
	}
	if(head2==NULL){
		return head1;
	}
	node*newhead=NULL;
	if(head1->data<head2->data){//0<1
	newhead=head1;
		newhead->next=mergeintosinglesortedll(head1->next,head2);
		return newhead;
	}
	else{
	newhead=head2;
		newhead->next=mergeintosinglesortedll(head1,head2->next);
		return newhead;
	}	
	// return newhead;
}

node* mergesort(node*head){//NULL
	// base case
	if(head==NULL || head->next==NULL){//single node is always sorted
		return head;
	}
	// rec case
	// step 1 find mid
	node*m=midpointofll(head);//300
	node*temp=m->next;
	m->next=NULL;
	node*x=mergesort(head);//2 4 5
	node*y=mergesort(temp);//1 3
	return mergeintosinglesortedll(x,y); //1 2 3 4 5
}

int main(){
	node*head1=NULL;
	node*tail1=NULL;//ll is empty
	int m;//5
	cin>>m;
	for (int i = 0; i <m; ++i)
	{
		int d;
		cin>>d;//5 7
		insertattail(head1,tail1,d); //1 3 5 8
	}
	node*nhead=mergesort(head1);
	printll(nhead);
	return 0;
}