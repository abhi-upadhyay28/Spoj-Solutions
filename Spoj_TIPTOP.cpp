#include<bits/stdc++.h>
using namespace std;             //  AC after 3 wrong answers !!!!
int main(){
    long double n;
	int t;
	int cnt=0;
	scanf("%d",&t);
	while(t--){
		cin>>n;
		//scanf("%lld",&n);
		cnt++;
		long double ans=sqrtl(n);
		if(ans-floor(ans)==0)
		printf("Case %d: Yes\n",cnt);
		else 
		printf("Case %d: No\n",cnt);
	}
	return 0;
}
