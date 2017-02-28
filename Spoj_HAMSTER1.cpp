#include<bits/stdc++.h>
using namespace std;
int main(){               // AC in second  go !!!
	int t;
	long double u,k1,k2;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);
	cin>>t;
	while(t--){
	cin>>u>>k1>>k2;
	long double theta;
	if(k2==0)
	theta=(1.0/2.0)*(M_PI/2.0);
    else
    theta=(1.0/2.0)*(M_PI-atan(4*k1/k2));
    long double f=u*u*sin(theta)*sin(theta)*k2/(20.0)+u*u*sin(2*theta)*k1/(10.0);
	cout<<theta<<" "<<f<<"\n";
}
	return 0;
}

