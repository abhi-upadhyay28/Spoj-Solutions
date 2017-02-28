#include<bits/stdc++.h>
#define pi 2*acos(0.0)            // AC in one go!!!
using namespace std;
int main(){
	int t;
	double s,u,cal,ans,theta;
		cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cin>>t;
	int cnt=0;
	while(t--){
		cin>>s>>u;
		cnt++;
		ans=0;
		theta=0;
		 cal=(s)*(9.806)/(u*u);
		if(cal>1||cal<-1)
		 ans=-1;
		else
	{
	  theta=asin(cal)/2.0;
	//	cout<<theta<<" "<<pi<<"\n";
		 ans=(theta*180.0)/3.14159;
	}
		if(ans==-1)
		cout<<"Scenario #"<<cnt<<": "<<"-1"<<"\n";
		else
		cout<<"Scenario #"<<cnt<<": "<<ans<<"\n";
	}
	return 0;
	
	
}
