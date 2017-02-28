#include<bits/stdc++.h>
using namespace std;
int main(){
	double a,b,c;
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%lf%lf%lf",&a,&b,&c);
	//	cin>>a>>b>>c;
		double s=(double)(a+b+c)/(double)(2.0);
		double ac=sqrt(3.0)/4.0;
	//	cout<<s<<" "<<ac<<"\n";
		double ans=(1.0/2.0)*((a*a+b*b+c*c)*ac+(3.0)*sqrt(s*(s-a)*(s-b)*(s-c)));
		//cout<<ans<<"\n";
		printf("%0.2f\n",ans);
	}
	return 0;
}

