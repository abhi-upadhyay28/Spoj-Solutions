#include<iostream>
#include<cmath>           
using namespace std;
int main(){           // problem when a,b,c,d are float... AC when a,b,c,d are double .... why??? Comment written about it!!!
	int t;
	//float ;
	double k,s,a,b,c,d;
	cout.setf(ios::showpoint);
		cout.setf(ios::fixed);
		cout.precision(2);
	cin>>t;
	while(t--){
		cin>>a>>b>>c>>d;
		s=(a+b+c+d)/2;
		k=sqrt((s-a)*(s-b)*(s-c)*(s-d));
		cout<<k<<"\n";
	}
	return 0;
}
