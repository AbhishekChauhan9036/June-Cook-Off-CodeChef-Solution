#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
	int turbocpp;
	cin>>turbocpp;
	while(turbocpp--){
		int zz,yy;
		cin>>zz>>yy;
		if(yy==1){
			cout<<"YES"<<endl;
			continue;
		}
		if(yy%2==0){
			int answer=zz-yy;
			if(answer%2!=0){
				cout<<"NO"<<endl;
			}else{
				cout<<"YES"<<endl;
			}
		}else{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}