#include <iostream>
using namespace std;
struct node{
	int val;
	node * next;
	node(int value){
		val=value;
		next=NULL;
	}
};
struct Stack{
	node * head=NULL;
	node * tail=NULL;
	int cnt=0;
	void push(int value){
		node * el=new node(value);
			el->next=tail;
		tail=el;
		cnt++;
		cout<<"ok"<<endl;
	}
	void pop(){
		if(cnt==0){
			tail=NULL;
			cout<<"error"<<endl;
		}
		else{
		cout<<tail->val<<endl;
		tail=tail->next;
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
		if(tail==NULL){
			cout<<"error"<<endl;
		}
		else
		cout<<tail->val<<endl;
	}
	void exit(){
		cout<<"bye"<<endl;
	}
};
int main(){
	string s;
	int x;
	Stack st;
	while(true){
		cin>>s;
		if(s=="exit"){
		st.exit();
		return 0;
		}
		if(s=="back"){
			st.back();
		}
		if(s=="push"){
			cin>>x;
			st.push(x);
		}
		if(s=="pop"){
			st.pop();
		}
		if(s=="size"){
			st.size();
		}
		if(s=="clear"){
			st.clear();
		}		
	}
}

