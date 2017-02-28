#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	long long int n,ans1;
//	cout.setf(ios::fixed);
//	cout.set
    long double ans;
	scanf("%d",&t);
	while(t--){
		scanf("%lld",&n);
		if(n%2==0)
		{
			ans=(long double)(n*n)/(long double)48.0;
			ans1=roundl(ans);
		}
		else
		{
			ans=(long double)((n+3)*(n+3))/(long double)48.0;
			ans1=roundl(ans);
		}
		cout<<ans1<<"\n";
	//	printf("%.0f\n",ans1);
	}
	return 0;
	
	
}
