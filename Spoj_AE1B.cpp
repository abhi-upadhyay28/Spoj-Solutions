#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n,k,s;           // AC in one go!!!!
	cin>>n>>k>>s;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	int tot=k*s;
	int sum=0,count=0;
	for(int i=n-1;i>=0;i--)
	{ 
	sum+=a[i];
	count++;
	if(sum>=tot)
	break;
	}
	cout<<count;
	return 0;
}
