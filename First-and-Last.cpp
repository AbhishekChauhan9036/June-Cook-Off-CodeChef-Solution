#include<bits/stdc++.h>
using namespace std;
int32_t main(){
	int turbocpp;
	cin>>turbocpp;

	while(turbocpp--){
	int ram;
     cin>>ram;
     int arr[ram];
     for(int i=0;i<ram;i++){
		 cin>>arr[i];
	 }

     int answer=arr[0]+arr[ram-1],x=ram-1;
     for(int i=ram-1;i>=1;i--)
     {
        if(arr[x]+arr[x-1]>=answer)
        answer=arr[x]+arr[x-1];
        x--;
     }

     cout<<answer<<endl;
	}
}