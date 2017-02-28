#include<iostream>
using namespace std;
int main(){                 // Saw logic !!!!!!!!
	int t;
	scanf("%lld",&t);
	while(t--){
	long long int n,ans;
	scanf("%lld",&n);
	ans=(((n-1)/2)*((n-1)/2))%n;
	printf("%lld\n",ans);
	}
	return 0;
}
