#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	long int sum;
	cin>>t;
	string s;
	while(t--)
	{
		 sum=0;
		int i;
		cin>>s;
		int n=s.length();
		for(i=0;i<n;i++)
		sum=sum+s[i]-'0';
		cout<<sum<<endl;
		
	}
	return 0;
}
