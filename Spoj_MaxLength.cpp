#include<iostream>
#include<cmath>
using namespace std;
int main(){   
cout.setf(ios::fixed);                  // Think I have Done it!!!
cout.setf(ios::showpoint); 
cout.precision(2);
	int t,i=0;
//	float a,s;
	double r,a;
	long double s;
	cin>>t;
	while(t--){
		i++;
		cin>>r;
		a=(16*r*r-1)/4;
		s=a+sqrt(4*r*r-a);
		cout<<"Case "<<i<<": "<<s<<"\n";
	}
	//cout<<10.123456;
     return 0;
}
