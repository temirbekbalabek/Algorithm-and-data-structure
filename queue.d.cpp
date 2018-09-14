#include <iostream>
#include <stack>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
const int maxsize=100000;
struct Queue {
	int num;
	int ssize;
	int m[maxsize];
	Queue(){
		num=0;
		ssize=0;
	}
	void push(int a){
		m[ssize]=a;
		ssize++;
	}
	int size(){
		return (ssize-num);
	}
	/*int clear(int b){
		
	}*/
	int back(){
		return m[ssize-1];
	}
	int pop(){
		
		return m[num++];
		
	}
	int front(){
		return m[num];
	}
};
int main(){
	Queue queue;
	//queue.ssize = 0;
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
			queue.push(x);
			cout<<"ok"<<endl;
		}
		if(s=="size"){
			cout<<queue.size()<<endl;
		}
		if(s=="clear"){
			//queue=new queue();
			queue.ssize=0;
			queue.num=0;
			cout<<"ok"<<endl;
		}
		if(s=="pop"){
			if((queue.ssize-queue.num)==0){
				cout<<"error"<<endl;
			}
			else
			cout<<queue.pop()<<endl;
	    }
	    if(s=="front"){
	    	if((queue.ssize-queue.num)==0){
	    		cout<<"error"<<endl;
			}
			else
	    	cout<<queue.front()<<endl;
		}
	    if(s=="back"){
	    	if(queue.ssize==0){
	    		cout<<"error"<<endl;
			}
			else
	    	cout<<queue.back()<<endl;
		}
	}
	
}
