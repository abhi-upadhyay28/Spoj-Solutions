#include<iostream>
using namespace std;
int main(){
	int n,i,k,count=0;           // AC in one go!!!!
	scanf("%d%d",&n,&k);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		if(a[i]%k==0)
		count++;
	}
	printf("%d\n",count);
	return 0;
}
