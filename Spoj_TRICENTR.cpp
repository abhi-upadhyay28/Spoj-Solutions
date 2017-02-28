#include<bits/stdc++.h>
using namespace std;                       // AC in one go!!!!
int main(){
	int t;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);
    double a,b,c,Gna,Gnb,Gnc,Sabc,oh,hg,r;
	cin>>t;
	while(t--){
		cin>>a>>Gna>>Gnb>>Gnc;
		Sabc=3.0/2.0*Gna*a;
		b=(Sabc*2.0)/(3.0*Gnb);
		c=(Sabc*2.0)/(3.0*Gnc);
		r=(a*b*c)/(4*Sabc);
		//cout<<a<<" "<<b<<" "<<c<<" "<<r<<"\n";
	    double ac=9.0*r*r-(a*a+b*b+c*c);
		if(ac<=0)
		oh=0.0;
		else
		oh=sqrt(9*r*r-(a*a+b*b+c*c));
		//cout<<oh<<"\n";
		hg=(2.0/3.0)*oh;
	//double anf=4.0*r*r-(4.0/9.0)*(a*a+b*b+c*c);
	//if(oh==0)
	//cout<<"yes\n";
	//	hg=sqrt(4.0*r*r-(4.0/9.0)*(a*a+b*b+c*c));
		cout<<Sabc<<" "<<hg<<"\n";
	}
	//cout<<sqrt(0);
	return 0;
}
