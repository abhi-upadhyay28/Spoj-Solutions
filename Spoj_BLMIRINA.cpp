#include<iostream>
#include<cmath>
using namespace std;
int main(){            // AC in one go!!!
	int t;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(6);
	int x,y,r;
	double ans1,ans2;
	cin>>t;
	while(t--)
	{
		cin>>x>>y>>r;
		double dist,theta,a,dist1;
		dist=sqrt(x*x+y*y);
		dist1=sqrt(dist*dist-r*r);
		theta=atan((double)y/(double)x) ;//*180.0/M_PI;
		a=atan((double)r/(double)dist1);   //*180.0/M_PI;
		ans1=dist1*cos(theta+a);
		ans2=dist1*sin(theta+a);
		//ans1=dist*cos(tanh((double)y/(double)x)+tanh((double)r/(double)dist));
		cout<<ans1<<" "<<ans2<<"\n";
	}
	return 0;
}
