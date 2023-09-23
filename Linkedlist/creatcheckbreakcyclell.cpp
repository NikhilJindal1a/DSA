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

void createcycle(node*head, int pos){
	node*temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	node*t=head;
	for(int jump=1; jump<=pos;jump++){
	    t=t->next;
	}
	temp->next=t;
}

bool iscyclic(node*head){
	node*fast=head;
	node*slow=head;
	while(fast!=NULL&&fast->next!=NULL){ //linear
		fast=fast->next->next;
		slow=slow->next;
		if(fast==slow){
			return true;
		}
	}
	return false;
}

void breakcycle(node*head){
    //check cycle is there or not
	node*fast=head;
	node*slow=head;
	while(fast!=NULL&&fast->next!=NULL){ //linear
		fast=fast->next->next;
		slow=slow->next;
		if(fast==slow){
			break;
		}
	}
	node*prev=head;
	while(prev->next!=fast){
		prev=prev->next;
	}
	slow=head;
	while(slow!=fast){
		prev=fast;
		fast=fast->next;
		slow=slow->next;
	}
	prev->next=NULL;
}

int main(){
	node*head=NULL;
	node*tail=NULL;//ll is empty
	int m;//8
	cin>>m;
	for (int i = 0; i <m; ++i)
	{
		int d;
		cin>>d;//5 7
		insertattail(head,tail,d); //1 2 3 7 5 6 7 8
	}
	if(iscyclic(head)){
		cout<<"yes this is cyclic ll"<<endl;
	}
	else{
		cout<<"this is not cyclic ll"<<endl;
	}
	int pos;
	cin>>pos;//2
	createcycle(head,pos);
// 	printll(head);
	if(iscyclic(head)){
		cout<<"yes this is cyclic ll"<<endl;
	}
	else{
		cout<<"this is not cyclic ll"<<endl;
	}//
	breakcycle(head);
	if(iscyclic(head)){
		cout<<"yes this is cyclic ll"<<endl;
	}
	else{
		cout<<"this is not cyclic ll"<<endl;
	}
	printll(head);
	return 0;
}
