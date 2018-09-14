#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int>a,b;
	int c;
	for(int i=0;i<5;i++){
		cin>>c;
		a.push_back(c);
	}
	for(int i=0;i<5;i++){
		cin>>c;
		b.push_back(c);
	}
	int cnt=0;
	
	while(true){
		if(cnt>1000000){
			cout<<"botva"<<endl;
			return 0;
		}
		if(a.size()==0){
		cout<<"second "<<cnt<<endl;
			return 0;
		}
		if(b.size()==0){
			cout<<"first "<<cnt<<endl;
			return 0;
		}
		if(a[0]==9 && b[0]==0){
				b.push_back(a[0]);
			b.push_back(b[0]);
			b.erase(b.begin(),b.begin()+1);
			a.erase(a.begin(),a.begin()+1);
			cnt++;
			continue;
		}
		if(a[0]==0 && b[0]==9){
				a.push_back(a[0]);
			a.erase(a.begin(),a.begin()+1);
			a.push_back(b[0]);
			b.erase(b.begin(),b.begin()+1);
			cnt++;
			continue;
		}
		if(a[0]>b[0]){
			a.push_back(a[0]);
			a.erase(a.begin(),a.begin()+1);
			a.push_back(b[0]);
			b.erase(b.begin(),b.begin()+1);
			cnt++;
			continue;
		}
		if(a[0]<b[0]){
			b.push_back(a[0]);
			b.push_back(b[0]);
			b.erase(b.begin(),b.begin()+1);
			a.erase(a.begin(),a.begin()+1);
			cnt++;
			continue;
		}
	}
}
