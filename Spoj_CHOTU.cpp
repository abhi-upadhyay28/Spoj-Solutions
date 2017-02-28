#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);
	double a,b;
	cin>>t;
	while(t--){
	cin>>a>>b;
    double e,exp1,exp2;
    exp2=(b*b)/(a*a);
   // cout<<exp2<<" "<<b*b<<" "<<a*a<<" ";
	exp1=1-exp2;	
	//cout<<exp1<<"\n";  
	e=sqrt(exp1);
	double ans=2*a*e;
	cout<<ans<<"\n";	
}
return 0;
}
