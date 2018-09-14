#include <iostream>
#include <stack>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
const int maxsize=100000;
struct Stack {
	int num;
	int ssize;
	int m[maxsize];
	Stack(){
		num=0;
		ssize=0;
	}
	void push(int a){
		m[ssize++]=a;
	}
	int size(){
		return ssize;
	}
	/*int clear(int b){
		
	}*/
	int back(){
		return m[ssize-1];
	}
	int pop(){
		ssize--;
		return m[ssize];
	}
};
int main(){
	Stack stack;
	//stack.ssize = 0;
	string s;
	int x;
	while(true){
		cin>>s;
		if(s=="exit"){
			cout<<"bye"<<endl;
			return 0;
		}
		if(s=="push"){
			cin>>x;
			stack.push(x);
			cout<<"ok"<<endl;
		}
		if(s=="size"){
			cout<<stack.size()<<endl;
		}
		if(s=="clear"){
			//stack=new Stack();
			stack.ssize=0;
			stack.num=0;
			cout<<"ok"<<endl;
		}
		if(s=="pop"){
			if(stack.ssize==0){
				cout<<"error"<<endl;
			}
			else
			cout<<stack.pop()<<endl;
	    }
	    if(s=="back"){
	    	if(stack.ssize==0){
	    		cout<<"error"<<endl;
			}
			else
	    	cout<<stack.back()<<endl;
		}
	}
	
}
