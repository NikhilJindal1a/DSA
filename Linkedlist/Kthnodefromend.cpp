#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int d){
        data=d;
        next=NULL;
    }
};

void insertattail(node*&head,node*&tail,int d){
    //if LL is empty
    if(head==NULL){
        node*p=new node(d);
        head=p;
        tail=p;
    }
    //not empty
    else{
        node*p=new node(d);
        tail->next=p;
        tail=p;
    }
}

int kthnodefromend(node*head,int k){
	node*p1=head;
	node*p2=head;
	for(int jump=1;jump<=k;jump++){
		p2=p2->next;
	}
	while(p2!=NULL){
		p1=p1->next;
	p2=p2->next;
	}
	return p1->data;
}

int main(){
    node*head=NULL;
    node*tail=NULL;
    int n;
    cin>>n; //9
    for(int i=0; i<n; i++){
        int d;
        cin>>d; //3 1 6 0 4 2 9 16 13
        insertattail(head,tail,d);
    }
    int k;
    cin>>k;//4th
    cout<<kthnodefromend(head,k)<<endl;
    return 0;
}