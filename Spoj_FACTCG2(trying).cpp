#include<bits/stdc++.h>
using namespace std;
int main(){                    // totally wrong !!!!!!
	int n;

	while(scanf("%d",&n)!=EOF)
	{
			vector<int>v;
		v.push_back(1);
//		v.push_back(x);
		while(n%2==0)
		{
		v.push_back(n);
		n=n/2;
	}
	int i;
	for(i=3;i<=sqrt(n);i+=2){
		while(n%i==0)
		{
			v.push_back(i);
			n=n/i;
		}
	}
	if(n>2)
	v.push_back(n);
	int n=v.size();
	for(i=0;i<n;i+=2)
	printf("%dx%d",v[i],v[i+1]);
		
	}
	return 0;
}

