#include <iostream>
using namespace std;
struct node{
	int val;
	node * next;
	node * prev;
	node(int value){
		val=value;
		next=NULL;
	}
};
struct Queue{
	node * head=NULL;
	node * tail=NULL;
	int cnt=0;
	void push(int value){
		
		node * el=new node(value);
		if(head==NULL)
		head=el;
		
		else{
			el->prev=tail;
			tail->next=el;
		}
		tail=el;
		cnt++;
		cout<<"ok"<<endl;
	}
	void pop(){
		if(cnt==0){
			head=NULL;
			cout<<"error"<<endl;
		}
		else{
		cout<<head->val<<endl;
		head=head->next;
		cnt--;
	}
		
	}
	void size(){
		cout<<cnt<<endl;
	}
	void clear(){
		head=NULL;
		tail=NULL;
		cnt=0;
		cout<<"ok"<<endl;
	}
	void front(){
		if(cnt==0){
			cout<<"error"<<endl;
		}
		else
		cout<<head->val<<endl;
	}
	void exit(){
		cout<<"bye"<<endl;
	}
};
int main(){
	string s;
	int x;
	Queue q;
	while(true){
		cin>>s;
		if(s=="exit"){
		q.exit();
		return 0;
		}
		if(s=="front"){
			q.front();
		}
		if(s=="push"){
			cin>>x;
			q.push(x);
		}
		if(s=="pop"){
			q.pop();
		}
		if(s=="size"){
			q.size();
		}
		if(s=="clear"){
			q.clear();
		}		
	}
}

