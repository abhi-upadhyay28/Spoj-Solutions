#include<iostream>
#include<cmath>
using namespace std;
double area(double a,double b,double c)
{
	double s,ans;
	s=(a+b+c)/2.0;
	ans=sqrt(s*(s-a)*(s-b)*(s-c));
	return ans;
}
int main(){                // Formula only !!!! AC !!!
	int t;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(4);
	double u,v,w,U,V,W,ans,u1,v1,w1,vol;
	cin>>t;
	while(t--){
		cin>>u>>v>>w>>W>>V>>U;
		u1=v*v+w*w-U*U;
		v1=u*u+w*w-V*V;
		w1=u*u+v*v-W*W;
		vol=((double)1/(double)12)*sqrt(4*u*u*v*v*w*w-u*u*u1*u1-v*v*v1*v1-w*w*w1*w1+u1*v1*w1);
		//cout<<ans<<"\n";
        double S=0;
				S+=area(u,v,W);
				S+=area(v,U,w);
				S+=area(w,u,V);
				S+=area(W,V,U);
				double r=(3*vol)/S;
				cout<<r<<"\n";
	}
	return 0;
}
