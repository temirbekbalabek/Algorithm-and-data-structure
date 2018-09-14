#include <iostream>
#include <cstdio>
#include <algorithm>
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
struct Deque{
	node * head=NULL;
	node * tail=NULL;
	int cnt=0;
	void push_back(int value){
		
		node * el=new node(value);
		if(head==NULL){
		head=el;
		tail=el;			
		}
		else{
			el->prev=tail;
			tail->next=el;
		}
		tail=el;
		cnt++;
		cout<<"ok"<<endl;
	}
	void push_front(int value){
		
		node * el=new node(value);
		if(head==NULL){
		head=el;
		tail=el;
		}
		else{
			head->prev=el;
			el->next=head;
		}
		head=el;
		cnt++;
		cout<<"ok"<<endl;
	}
	void pop_front(){
		if(cnt==0){
			head=NULL;
			tail=NULL;
			cout<<"error"<<endl;
		}
		else{
		cout<<head->val<<endl;
		head=head->next;
		cnt--;
		}
	}
	void pop_back(){
		if(cnt==0){
			head=NULL;
			tail=NULL;
			cout<<"error"<<endl;
		}
		else{
		cout<<tail->val<<endl;
		tail=tail->prev;
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
	void back(){
		if(cnt==0)
		cout<<"error"<<endl;
		else
		cout<<tail->val<<endl;
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
	Deque q;
	while(true){
		cin>>s;
		if(s=="exit"){
		q.exit();
		return 0;
		}
		if(s=="back"){
			q.back();
		}
		if(s=="front"){
			q.front();
		}
		if(s=="push_back"){
			cin>>x;
			q.push_back(x);
		}
		if(s=="push_front"){
			cin>>x;
			q.push_front(x);
		}
		if(s=="pop_front"){
			q.pop_front();
		}
		if(s=="pop_back"){
			q.pop_back();
		}
		if(s=="size"){
			q.size();
		}
		if(s=="clear"){
			q.clear();
		}		
	}
}

