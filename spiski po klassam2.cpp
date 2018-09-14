#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

map<int, vector<string> > mp;
int main(){
	int b;
	string s1;
	//freopen("input.txt", "r", stdin);
	while(cin>>b>>s1){
		mp[b].push_back(s1);
	}	
	map<int,vector<string> >:: iterator it;
	//sort(v.begin(),v.end(),F);
	for(it=mp.begin();it!=mp.end();it++){
		for(int i=0;i<(*it).second.size();i++){
			cout<<(*it).first<<" "<<(*it).second[i]<<endl;
		}
	}
}
