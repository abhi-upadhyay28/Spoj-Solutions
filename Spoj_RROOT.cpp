#include<bits/stdc++.h>
using namespace std;                           // AC !!!!
int main(){
	int t;
	scanf("%d",&t);
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(6);
	double s,ans;
    while(t--)
    {
    	//cin>>s;
    	scanf("%lf",&s);
    	ans=1.0-(sqrt(2.0)/(3.0*sqrt(s)));
    	cout<<ans<<"\n";
	}
	return 0;
}
