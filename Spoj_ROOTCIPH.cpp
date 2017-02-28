#include<iostream>
#include<cmath>
using namespace std;         // Giving wrong answer!!!!! ... all logic same!!!!!
int main(){
	int t;
	long long int a,b,c,ans;
//	cin>>t;
scanf("%d",&t);
	//cin>>a>>b>>c;
	scanf("%lld%lld%lld",&a,&b,&c);
	ans=abs(a*a-2*b);
	printf("%lld\n",ans);
	//cout<<a*a-2*b;
	return 0;
}
