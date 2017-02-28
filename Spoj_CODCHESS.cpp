#include<iostream>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int ans;
		if(n%2==1)
		ans=0;
		else
		ans=1;
		cout<<ans<<"\n";
	}
	return 0;
}
