#include<bits/stdc++.h>
using namespace std;
int palin(long long int a){                    // TLE :C !!!
	long long int n=a;
	long long int pal=0;
	int rem;
	while(n!=0){
		rem=n%10;
		pal=pal*10+rem;
		n=n/10;
	}
	int z;
	if(a==pal)
	z=1;
	else
	z=0; 
	return z;
}
int main(){
	long long int n,i,count;
	int t;
	scanf("%d",&t);
	while(t--){
	scanf("%lld",&n);
	count=0;
/*	int a=palin(n);
	cout<<a;     */
	for(i=1;i<=n/2;i++)
	{
		int a=palin(i);
		int b=palin(n-i);
		if(a==1&&b==1){
			if(i==n-i)
			count++;
			else
			count+=2;
		}
		else
		continue;
	}
	printf("%lld\n",count);  
}
}
