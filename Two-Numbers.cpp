#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
	int turbocpp;
	cin>>turbocpp;

	while(turbocpp--){
	int n;
	cin>>n;

	if(n==2){
		cout<<0<<endl;
	}else if(n%2!=0){
		cout<<((n/2)*((n/2)+1))-1<<endl;
	}else{
		if((n/2)%2==0){
			cout<<(((n/2)-1)*((n/2)+1))-1<<endl;
		}else{
			cout<<(((n/2)-2)*((n/2)+2))-1<<endl;
		}
	}
	
	}
	return 0;
}