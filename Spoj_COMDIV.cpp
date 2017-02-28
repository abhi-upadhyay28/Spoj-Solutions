#include<bits/stdc++.h>
#define ll long long int                   // AC in one go!!!
int gcd(int a, int b){
	if(b==0)
	return a;
	else
	return gcd(b,a%b);
}
using namespace std;
int main(){
	int t,a,b,ans;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&a,&b);
		ans=0;
		int d=gcd(a,b);
		int i;
		for(i=1;i<=sqrt(d);i++){
			if(d%i==0){
				if(i==d/i)
				ans++;
				else
				ans+=2;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}
