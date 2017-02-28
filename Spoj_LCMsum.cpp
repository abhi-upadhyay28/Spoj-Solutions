#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b);
int main(){
	ios_base::sync_with_stdio(false);               // TLE !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! :-( GETTING FRUSTRATED!!!!!!
    cin.tie(NULL);
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int lcm[n];
		for(int i=1;i<=n;i++)
		lcm[i-1]=(i*n)/gcd(i,n);
		int sum=0;
		for(int i=0;i<n;i++)
		sum=sum+lcm[i];
		cout<<sum<<"\n";
	}
	return 0;
}
int gcd(int a,int b){
	if(b==0)
	return a;
	else
	return gcd(b,a%b);
}
