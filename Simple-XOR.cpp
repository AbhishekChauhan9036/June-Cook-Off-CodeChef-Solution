#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	int turbocpp;
	cin>>turbocpp;

	while(turbocpp--){
	int n,m;
	cin>>n>>m;
      if(n%2!=0)
      {
        if(m-n>=4)
        {
            for(int k=1;k<=4;k++)
                cout<<n+k<<" ";
            cout<<endl;
        }
        else cout<<"-1"<<endl;
      }
      else if(n%2==0)
      {
        if(m-n>=3)
        {
            for(int k=0;k<4;k++)
                cout<<n+k<<" ";
            cout<<endl;
        }
        else cout<<"-1"<<endl;
      }

      else cout<<"-1\n";
	}
	return 0;
}