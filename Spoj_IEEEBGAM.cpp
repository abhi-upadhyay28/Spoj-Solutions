#include<bits/stdc++.h>    // AC in first attempt !!!!
using namespace std;
int main(){
	int t,n;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(8);
	cin>>t;
	double ans;
	while(t--){
		cin>>n;
		ans=(double)n/(double)(n+1);
		cout<<ans<<"\n";
	}
	return 0;
}
