#include<bits/stdc++.h>
using namespace std;                     // AC in one go !!!!
int main(){
	int a[8];
	int i;
	while(1)
	{
		for(i=0;i<8;i++)
		scanf("%d",&a[i]);
		int as=0;
		for(i=0;i<8;i++)
		{
			if(a[i]==-1)
			as=1;
		}
		if(as==1)
		break;
		int b=4,pos=0;
		double temp;
		double max=ceil((double)a[0]/(double)a[0+b]);
		//max=a[0];
		for(i=1;i<4;i++)
		{
			temp=ceil((double)a[i]/(double)a[i+b]);
			if(temp>max)
			{
			max=temp;
			pos=i;
		}
		}
		int ans[4]={0};
		for(i=0;i<4;i++)
		{
			ans[i]=(max*a[i+b])-a[i];
		}
		for(i=0;i<4;i++)
		printf("%d ",ans[i]);
		printf("\n");
    }
    return 0;
}
