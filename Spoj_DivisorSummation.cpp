#include<iostream>
#include<cmath>
using namespace std;
long long int divisor(int n);
int main()
{
	int t,n;
	cin>>t;
	while(t--){
		scanf("%d",&n);
	//	div=1;
		long long int sums=divisor(n);
		printf("%lld\n",sums);
	}
	return 0;
}
long long int divisor(int n){
int maxd=sqrt(n);
long long int sum;
int  i;
for( i=1;i<maxd+1;i++)
{
	if(n%i==0){
		sum=sum+i;
		int d=n/i;
		if(d!=i)
		sum+=d;
	}
}
	return sum;
}
