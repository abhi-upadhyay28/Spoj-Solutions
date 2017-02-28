#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	long long int n;
	scanf("%d",&t);                   // Every perfect square number has odd number of divisors !!!!
	while(t--){
		scanf("%lld",&n);
		double a=sqrt(n);
		if(a-floor(a)==0)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}
