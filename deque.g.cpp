#include <iostream>
using namespace std;
const int N=1000;
struct Deque{
	int m[N];
	int last;
	Deque(){
		last=0;
	}
	void clear(){
		last=0;
		cout<<"ok"<<endl;
	}
	void push_front(int value){
		for(int i=last;i>0;i--){
			m[i]=m[i-1];
		}
		m[0]=value;
		last++;
		cout<<"ok"<<endl;
	}
	void push_back(int value){
		m[last++]=value;
		cout<<"ok"<<endl;
	}
	void pop_front(){
		if(last==0){
			cout<<"error"<<endl;
			return;
		}
		int first=m[0];
		for(int i=1;i<last;i++){
			m[i-1]=m[i];
		}
		last--;
		cout<<first<<endl;
	}
	void pop_back(){
		if(last==0){
			cout<<"error"<<endl;
			return;
		}
		cout<<m[last-1]<<endl;
		last--;
	}
	void size(){
		cout<<last<<endl;
	}
	void back(){
		if(last==0){
			cout<<"error"<<endl;
			return;
		}
		cout<<m[last-1]<<endl;
	}
	void front(){
		if(last==0){
			cout<<"error"<<endl;
			return;
		}
		cout<<m[0]<<endl;
	}
	void exit(){
		cout<<"bye"<<endl;
	}
};
int main(){
	string s;
	int x;
	Deque deque;
	while(cin>>s){
		if(s=="exit"){
		deque.exit();
		return 0;			
		}
		if(s=="push_back"){
			cin>>x;
			deque.push_back(x);
		}
		if(s=="push_front"){
			cin>>x;
			deque.push_front(x);
		}
		if(s=="pop_back"){
			deque.pop_back();
		}
		if(s=="pop_front"){
			deque.pop_front();
		}
		if(s=="size"){
			deque.size();
		}
		if(s=="front"){
			deque.front();
		}
		if(s=="back"){
			deque.back();
		}
		if(s=="clear"){
			deque.clear();
			
		}
	}
}
