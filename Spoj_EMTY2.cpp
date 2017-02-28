#include<bits/stdc++.h>
using namespace std;
int main(){       // giving wrong ans!!!!
	int t,j;
	string s;
	//scanf("%d",&t);
	cin>>t;
	int cnt=0;
	while(t--){
		cin>>s;
		cnt++;
		int count1=0,count2=0;
		int n=s.length();
		for(j=0;j<n;j++)
		{
			if(s[j]=='1')
			count1++;
			else if(s[j]=='0')
			count2++;
		}
		if(n%3==0){
		
		if(count2==2*count1)
		cout<<"Case "<<cnt<<": "<<"yes\n";
		else
		cout<<"Case "<<cnt<<": "<<"no\n";
	}
	else
	{
		cout<<"Case "<<cnt<<": "<<"no\n";
	}
	}
	return 0;
}
