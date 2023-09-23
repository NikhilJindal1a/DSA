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

node*kreversell(node*head, int k){
    //base case
    if(head==NULL){
        return head;
    }
    //rec case
    node*temp=head;
    for(int jump=1; jump<=k-1; jump++){
        temp=temp->next;
    }
    node*ptr = temp->next;
    temp->next=NULL;
    node*nhead=reversell(head);//6 2 3
    node*t=nhead;
    for(int jump=1; jump<=k-1;jump++){
        t=t->next;
    }
    t->next=kreversell(ptr,k);//1 4 0 3 8 9
    return nhead;
}

int main(){
	node*head=NULL;
	node*tail=NULL;//ll is empty
	int m;//9
	cin>>m;
	for (int i = 0; i <m; ++i)
	{
		int d;
		cin>>d;//5 7
		insertattail(head,tail,d); //3 2 6 0 4 1 9 8 13
	}
	int k;
	cin>>k;//3
	node*nhead=kreversell(head,k);
	printll(nhead);//6 2 3 1 4 0 13 8 9
	return 0;
}