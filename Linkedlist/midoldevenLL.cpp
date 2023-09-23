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

// odd ll 
int midpointofll(node*head){
	node*slow=head;
	node*fast=head;
	while(fast->next!=NULL){
	fast=fast->next->next;//3
	slow=slow->next;
	}
	return slow->data;
}

// // even ll  2nd mid dedega
// int midpointofll(node*head){
// 	node*slow=head;
// 	node*fast=head;
// 	while(fast!=NULL){
// 	fast=fast->next->next;//3
// 	slow=slow->next;
// 	}
// 	return slow->data;
// }

// // even ll  ist mid dedega
// int midpointofll(node*head){
// 	node*slow=head;
// 	node*fast=head->next;
// 	while(fast!=NULL and fast->next!=NULL){
// 	// while( fast->next!=NULL and fast!=NULL){
// 		fast=fast->next->next;//7 //seg fault
// 	slow=slow->next;
// 	}
// 	return slow->data;
// }

int main(){
	node*head=NULL;
	node*tail=NULL;//ll is empty
	int n;//5
	cin>>n;
	for (int i = 0; i <n; ++i)
	{
		int d;
		cin>>d;//5 7
		insertattail(head,tail,d); //5 7 3 8 1 
	}
	cout<<"mid point is "<<midpointofll(head)<<endl;
	return 0;
}