#include <iostream>
#include <vector>
using namespace std;
//const int N=1000;
struct Deque{
	vector<int>v;
	int last;
	Deque(){
		last=0;		
	}
	void clear(){
		last=0;
		v.clear();
		cout<<"ok"<<endl;
	}
	void push_front(int value){
		if(v.size()<=last && last!=0){
		v.push_back(v[last-1]);
		}
		if(v.size()>last){
		v[last]=v[last-1];
		}
		if(last==0){
			v.push_back(value);
		}
		if(last!=0){
		for(int i=last-1;i>0;i--){
			v[i]=v[i-1];
		}
		}
		v[0]=value;
		last++;
		cout<<"ok"<<endl;
	}
	void push_back(int value){
		if(v.size()<=last){
		v.push_back(value);			
		}
		else{
		v[last]=value;			
		}
		
		last++;
		cout<<"ok"<<endl;
	}
	void pop_front(){
		if(last==0){
			cout<<"error"<<endl;
			return;
		}
		int first=v[0];
		for(int i=1;i<last;i++){
			v[i-1]=v[i];
		}
		last--;
		cout<<first<<endl;
	}
	void pop_back(){
		if(last==0){
			cout<<"error"<<endl;
			return;
		}
		cout<<v[last-1]<<endl;
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
		cout<<v[last-1]<<endl;
	}
	void front(){
		if(last==0){
			cout<<"error"<<endl;
			return;
		}
		cout<<v[0]<<endl;
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
