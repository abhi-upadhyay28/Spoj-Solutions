#include<iostream>
#include<cmath>
using namespace std;
//long long int a[1000001];
int main(){                         // Saw formula from google
	int t;


	//scanf("%d",&t);
	cin>>t;
	while(t--){
			unsigned long long int n,ans;
		cin>>n;
		//scanf("%lld",&n);
		ans=((n*(n+2)*(2*n+1))/8);
		cout<<ans<<"\n";
		//printf("%lld\n",ans);
	}
	return 0;
}
