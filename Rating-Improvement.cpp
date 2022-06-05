#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	int turbocpp;
	cin>>turbocpp;

	while(turbocpp--){
		int x,y;
		cin>>x>>y;

		if((y>=x && y<=x+200)){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
}