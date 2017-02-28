#include<iostream>
using namespace std;
int main(){
	int m[101],n,ar[10001]={0},b,a;      
	cin>>n;
	int i,j;
	for(i=0;i<n;i++)
	{
	   cin>>m[i]>>a;
	   for(j=0;j<a;j++)
	   {
	   	cin>>b;
	   	ar[b]=1;
	   }
	}
	for(i=0;i<=n;i++)
	ar[m[i]]=0;
	int res=0;
	for(i=0;i<=10000;i++)
	{
		if(ar[i]==1)
		res++;
	}
	cout<<res;
	return 0;
}
