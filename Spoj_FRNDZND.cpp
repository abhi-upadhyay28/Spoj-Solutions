#include<bits/stdc++.h>
using namespace std;              // AC in one go !!!
int main(){
	int n,q,i,l,r;
	scanf("%d%d",&n,&q);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	while(q--){
	scanf("%d%d",&l,&r);
	if(l==r)
	{
		if(l!=0)
	printf("%d\n",a[l-1]);
	else
	printf("0\n");
}
else
printf("0\n");
}
return 0;
}
