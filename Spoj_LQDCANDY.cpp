#include<bits/stdc++.h>
using namespace std;
bool power2(long long int n){                  // AC in 1 st attempt
	return ((n&&(n&(n-1)))==0);
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,count=0,ans1,sum,ans2,temp,a;
		scanf("%lld",&n);
		a=n;
		if(power2(a))
		{
			ans1=a;
			ans2=0;
		}
		else{
		while(a>0)
		{
			a=a/2;
			count++;
		}
		ans1=pow(2,count);
		sum=0;
		ans2=0;
		temp=ans1;
		while(1)
		{
			temp=temp/2;
			ans2++;
			sum+=temp;
			if(sum>n)
		    {
				sum-=temp;
				continue;
			}
			else if(sum==n)
			break;
			else
			continue;
		}
	}
		printf("%lld %lld\n",ans1,ans2);
	}
	return 0;
}
