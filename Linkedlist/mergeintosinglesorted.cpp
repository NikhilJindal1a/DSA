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

	node*head2=NULL;
	node*tail2=NULL;//ll is empty
	int n;//5
	cin>>n;
	
	for (int i = 0; i <n; ++i)
	{
		int d;
		cin>>d;//5 7
		insertattail(head2,tail2,d); //0 2 2 4 6
	}
	node*nhead=mergeintosinglesortedll(head1,head2);
	printll(nhead);
	return 0;
}