#include <iostream>
#include <vector>
using namespace std;
int main(){
	
	int n,a,cnt=0;
	char b;
	cin>>n;
	int c[n];
	vector<int> v;
	for(int i=0;i<n;i++){
		cin>>b;  //12345678*2
				// 123456789
		if(b=='+'){
			cin>>a;
			c[cnt]=a;
			cnt++;
		}
		if(b=='*')
		{
			cin>>a;
			if(cnt%2==0){
				int last=c[cnt-1];
				int d[n];
				for(int i=0;i<cnt;i++){
					d[i]=c[i];
				}
				for(int i=cnt/2+1;i<cnt;i++){
					c[i]=d[i-1];
				}
				c[cnt]=last;
				c[cnt/2]=a;
			}
			if(cnt%2==1){	
				int last=c[cnt-1];
				int d[n];
				for(int i=0;i<cnt;i++){
					d[i]=c[i];
				}
				for(int i=cnt/2+2;i<cnt;i++){
					c[i]=d[i-1];
				}
				c[cnt]=last;
				c[cnt/2+1]=a;
			}
		cnt++;
		}                 //2453
		if(b=='-'){
			if(cnt>0){
			v.push_back(c[0]);
				if(cnt!=1){
				for(int i=0;i<cnt-1;i++){
				c[i]=c[i+1];
				}
				}
			}
			cnt--;
		}
	}
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<endl;
	}
}


//123456
