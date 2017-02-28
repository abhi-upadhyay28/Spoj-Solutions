#include<iostream>
#define max 10000000
#define ll long long int 
using namespace std;
ll ans[max];
ll spf[max];
int main(){
	int i,j;
	for(i=2;i*i<max;i++){
		if(!spf[i])
		{
			for(j=i;j<max;j+=i)
			{
				if(!spf[j])
				spf[j]=i;
			}
		}
	}
	ans[0]=0,ans[1]=0;
	for(i=2;i<max;i++)
	{
		ans[i]=ans[i-1]+spf[i];
		if(!spf[i])
		ans[i]+=i;
	}
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		printf("%lld\n",ans[n]);
	}
	return 0;	
}
