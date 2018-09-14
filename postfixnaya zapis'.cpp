#include <iostream>
#include <stack>
#include <cstdlib>
using namespace std;
int main(){
	stack<int>s;
	string a,l;
	getline(cin,a);
	for(int i=0;i<a.size();i++){
		if(a[i]=='*' || a[i]=='+' || a[i]=='-'){
		
			if(a[i]=='*'){
			int k1=s.top();
			s.pop();
			int k2=s.top();
			s.pop();
			s.push((k1*k2));
			}
			else if(a[i]=='+'){
			int k1=s.top();
			s.pop();
			int k2=s.top();
			s.pop();
			s.push((k1+k2));
			}
			else if(a[i]=='-'){
			int k1=s.top();
			s.pop();
			int k2=s.top();
			s.pop();
			s.push((k2-k1));
			}
			l="";
		}
		else{
			if(a[i]==' '){
				
			int x=atoi(l.c_str());
			s.push(x);
			l="";
			}
			else{
		    l+=a[i];
			}			
		}
	}
	cout<<s.top()<<endl;
}
