#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct byclass{
	int a;
	string s;
	};
	bool F(byclass c, byclass d){
		if(c.a<d.a) return true;
		return false;
	}
int main(){
	int b,cnt=0;
	string s1;
	vector<byclass>v;
	//freopen("input.txt", "r", stdin);
	while(cin>>b>>s1){
		byclass x;
		x.a = b;
		x.s = s1;
		v.push_back(x);
	}	
	sort(v.begin(),v.end(),F);
	for(int i=0;i<v.size();i++){
		cout<<v[i].a<<" "<<v[i].s<<endl;
	}
}
