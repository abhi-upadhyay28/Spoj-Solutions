#include<iostream>
#include<cmath>       // AC in second go ..... First was wrong ans due to int values of input.... changed to get ac....
using namespace std;
int main(){
	int t;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(6);
	double r1,r2,r3;
	cin>>t;
	while(t--){
		cin>>r1>>r2>>r3;
		double r4;
		r4=(double)r1*r2*r3/(double)(r1*r2+r1*r3+r2*r3+2*sqrt(r1*r2*r3*(r1+r2+r3)));
		cout<<r4<<"\n";
	}
	return 0;
}
