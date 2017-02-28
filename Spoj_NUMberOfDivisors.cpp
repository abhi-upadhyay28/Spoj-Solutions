#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	long long int a[t],b[t];
	for(int i=0;i<t;i++)
	cin>>a[i];
	for(int i=0;i<t;i++)
	{
		long long int n=a[i];
		long long int count=0,a;
		a=sqrt(n);
		
		for(int j=1;j<a+1;j++)
		{
			if(n%j==0)
			{
				if(n/j==j)
				count++;
				else
				count+=2;
			}
		}
		b[i]=count;
	}
	for(int i=0;i<t;i++)
	cout<<b[i]<<"\n";
	return 0;
}
