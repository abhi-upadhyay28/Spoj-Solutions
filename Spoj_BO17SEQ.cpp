#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;                   // Showing wrong answer!!!!
	scanf("%d",&n);          // Still Showing wrong answer!!!! 
	int a[n];
	int i;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	long long int cost=0;
//	sort(a,a+n);
vector<int>v;
//	int max1=max(a[0],a[1]);
v.push_back(-1);
	for(i=0;i<n;i++)
	{
	int max1=max(a[i],v[0]);
	cost+=max1;
	v.pop_back();
	v.push_back(max1);
//	a[min(a[i],a[i+1])]=0;
	}    
	printf("%lld",cost-a[0]);
	return 0;
}
