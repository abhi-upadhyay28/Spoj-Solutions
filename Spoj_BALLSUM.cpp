#include<bits/stdc++.h>           // Use of long long int is important .... costed me 2 wa :C
#define ll long long int 
using namespace std;
ll gcd (ll p, ll q){
	if(q==0)
	return p;
	else
	return gcd(q,p%q);
}
int main(){
	int i,j;
    ll n,k;
	 ll p,q,d;
	while(1){
		scanf("%lld%lld",&n,&k);
		if(n==-1&&k==-1)
		break;
	    q=((n)*(n-1))/2;
	     ll nn =(k-1)/2;
	    p=nn*k-nn*(nn+1);
	  /*  ll count=0;
	    for(i=1;i<=k;i++){
	    	for(j=i+1;j<=k;j++){
	    		if(i+j<=k)
	    		count++;
			}
		}        */
		//p=count;
		d=gcd(p,q);
		p=p/d;
		q=q/d;
		if(p==0)
		printf("0\n");
		else if(p==q)
		printf("1\n");
		else
		printf("%lld/%lld\n",p,q);
	}
	return 0;
}

