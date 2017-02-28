#include<bits/stdc++.h>
#define max 10001
using namespace std;              // TLE !!!!
                                  // Solved !!!
bool isprime[max];
int phi[max];
void sieve(){
	memset(isprime,true,sizeof(isprime));
	isprime[0]=false;
	isprime[1]=false;
	int i,j;
	for(i=2;i*i<=10000;i++){
		if(isprime[i]==true){
			for(j=i*i;j<=10000;j+=i)
			isprime[j]=false;
		}
	}
}
void totient(){
	int i,j;
	for(i=0;i<=10000;i++)
	phi[i]=i;
	for(i=0;i<=10000;i++){
		if(isprime[i]==true)
		{
			for(j=i;j<=10000;j+=i)
			phi[j]-=(float)phi[j]/(float)i;
		}
	}
}
int main(){
	sieve();
	totient();
	int t,i,j;
	scanf("%d",&t);
	 long long int h;
	 int n;
	while(t--){
		scanf("%d",&n);
		h=0;
		for(i=1;i<=n;i++)
		{
		h=h+phi[i];
		}
		long long int ans=h*h;
		printf("%lld\n",ans);
	}
	return 0;
}

