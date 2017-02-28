#include<iostream>
using namespace std;
int ans[1000001];
int main(){
    int t;          // Wrong logic .... not submitted yet....Think about logic again ....
	scanf("%d",&t);
	int n,i,j;
	for(i=8;i<=1000000;i+=3)
	ans[i]=i-5;
	for(i=0;i<=1000000;i++)
	{
		if(ans[i]==0)
		ans[i]=-1;
	}
	for(j=0;j<t;j++){
		scanf("%d",&n);
		printf("Case %d: %d\n\n",j+1,ans[n]);
	}
	return 0;
	
	
}
