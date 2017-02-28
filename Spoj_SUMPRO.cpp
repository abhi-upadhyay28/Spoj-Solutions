#include<iostream>
using namespace std;
int main(){
	int t,i;
	scanf("%d",&t);
	long long int sum,n,h;
	while(t--){
	scanf("%lld",&n);
	sum=0;
	for(i=1;i<=n/2;i++)
	{
		int y=n/i;
		sum+=(i*y);
		sum%=1000000007;
	}
	for(i=n/2+1;i<=n;i++){
		sum+=i;
		sum%=1000000007;
	}
	printf("%lld\n",sum);
	}
	return 0;
}
