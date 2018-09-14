#include <iostream>
using namespace std;
struct node{
	int val;
	node * next;
	
	node (int value){
		val = value;
		next = NULL;
	}
};

struct Queue{
	node * head=NULL;
	node * tail=NULL;
	int count=0;
	//tail->val;
	//tail->next;
	
	void push(int a){
		node * el = new node(a);
		if(head==NULL){
			head=el;
			tail=el;
		}
		if(tail!=NULL){
			tail->next=el;
			tail=el;
		}
		count++;
		cout<<"ok"<<endl;
	}
	void clear(){
		tail=NULL;
		head=NULL;
		count=0;
		cout<<"ok"<<endl;
	}
	void pop(){
		cout<<head->val<<endl;
		head=head->next;
		count--;
	}
	void size(){
		cout<<count<<endl;
	}
	void front(){
		cout<<(head->val)<<endl;
	}
	void exit(){
		cout<<"bye"<<endl;
	}
};
int main(){
	string s;
	int x;
	Queue q;
	while(1){
		cin>>s;
		if(s=="exit"){
			q.exit();
			return 0;
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
		if(s=="front"){
			q.front();
		}
		if(s=="clear"){
			q.clear();	
		}
	}
}
