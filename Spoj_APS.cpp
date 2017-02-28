#include<bits/stdc++.h>
#define ll long long int 
#define max 10000
using namespace std;
ll ans[max];
bool v[max];
ll sp[max];
void Sieve(){
	int i,j;
	for(i=2;i<max;i++){
		int z=2;
	  while (z * z <= i) {
        if (i % z == 0) {
            sp[i]=z;
        } else {
            z++;
        }
    }
    if (i > 1) {
        //cout << n << endl;
        sp[i]=i;
    }
}
/*	for(i=2;i<max;i++){
	
	for(j=2;j*j<=i;j++){
		if(i%j==0)
		{
			//if()
			//while(i%j==0)
			//i=i/j;
			sp[i]=j;
		}
	}
		if(i!=1)
		sp[i]=i;
}       
	for (int i = 2; i < max; i += 2)	sp[i] = 2;//even numbers have smallest prime factor 2
	for (int i = 3; i < max; i += 2){
		if (!v[i]){
			sp[i] = i;
			for (int j = i; (j*i) < max; j += 2){
				if (!v[j*i])	v[j*i] = true, sp[j*i] = i;
			}
		}
	}               */   
}
int main(){
	int t,i,j;
/*		for(i=2;i<max;i+=2)
	sp[i]=2;
	for(i=3;i<max;i+=2){
		if(!v[i])
		{  sp[i]=i;
			for(j=i;j*i<max;j+=2)
			{
				if(!v[j*i]){
				v[j*i]=true;
				sp[j*i]=i;
			}
			}
		}
	}       */
	Sieve();
	ans[0]=0;
	ans[1]=0;
	int n;
	for(i=2;i<max;i++)
	ans[i]=ans[i-1]+sp[i];
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		printf("%lld\n",ans[n]);
	}
	return 0;
}
