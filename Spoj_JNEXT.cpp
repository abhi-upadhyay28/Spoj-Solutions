#include<bits/stdc++.h>
using namespace std;
void swap(char *p, char *q){
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}
int main(){
	int t,n,i;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		char a[n];
			int small,x;
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		for(i=n-1;i>0;i--)
		{
			if(a[i-1]<a[i])
			break;
		}
		if(i==0)
		{
			printf("-1\n");
			continue;
	}
		else
		{
			small=i;
			x=a[i-1];
			int j;
			for(j=i+1;j<n;j++)
			{
				if(a[j]>x&&a[j]<a[small])
				small=j;
		    }
		    swap(&a[i-1],&a[small]);
			sort(a+i,a+n);
		}
		for(i=0;i<n;i++)
		printf("%d",a[i]);
		printf("\n");
	}
	return 0;
}
