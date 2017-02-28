#include<iostream>
#include<cmath>              // AC in second attempt :C
using namespace std;
int main(){
	int a[10];
	int sum=0,rsum;
	for(int i=0;i<10;i++)
	scanf("%d",&a[i]);
	for(int i=0;i<10;i++)
	{
		if(sum<=100)
		sum+=a[i];
	     if(sum>100)
	     {
	     	rsum=sum;
		 rsum-=a[i];
		 break;
	}
	}
	if(abs(rsum-100)>abs(sum-100))
	printf("%d",sum);
	else if(abs(rsum-100)<abs(sum-100))
	printf("%d",rsum);
	else
	printf("%d",sum);
	return 0;
}
