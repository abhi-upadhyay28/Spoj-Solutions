#include<iostream>
using namespace std;
#define ll long long int
ll a[10000001];                   // AC IN ONE GO!!!!!
int main(){
	ll n;
	int t,i;
	a[0]=0;
	a[1]=2;
	a[2]=7;
	for(i=3;i<=10000000;i++)
	{
		a[i]=(a[i-1]+2+3*(i-1))%1000007;
	}
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<a[n]<<"\n";
	}
	return 0;
	}
