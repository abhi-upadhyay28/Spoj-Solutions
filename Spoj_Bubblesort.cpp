#include<iostream>
using namespace std;
int main(){
	int t,m;
	scanf("%d",&t);

	for(m=0;m<t;m++)
	{
			int n,i,count=0,temp,j;
		scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		for(i=0;i<n-1;i++){
			for(j=0;j<n-i-1;j++)
			{
				if(a[j]>a[j+1])
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
					count++;
				}
			}
		}
		cout<<"Case "<<m+1<<": "<<count%10000007<<"\n";
	}
	return 0;
}
