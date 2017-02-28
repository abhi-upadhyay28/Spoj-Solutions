#include<iostream>
using namespace std;         // AC 
int main(){
	int t,ans;
	scanf("%d",&t);
	long long int n;
	while(t--){
		scanf("%lld",&n);
		if(n%6==1)
		ans=1;
		else if(n%6==2)
		ans=4;
		else if(n%6==3)
		ans=6;
		else if(n%6==4)
		ans=5;
		else if(n%6==5)
		ans=2;
		else if(n%6==0)
		ans=0;
		printf("%d\n",ans);
	}
	return 0;
}
