#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
	if(b==0)
	return a;
	else
	return gcd(b,a%b);
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		string s;
		scanf("%d",&n);
		cin>>s;
		int tot=s.length();
		if(n==0)
		{
			cout<<s<<"\n";
			continue;
		}
		else if(tot==1)
		{
			if(s[0]=='0')
			cout<<n<<"\n";
			continue;
		}
		else{       
		int d,i;
		int m=s[0]-'0';
		for(i=1;i<tot;i++)
		{
			d=m%n;
			m=10*d+(s[i]-'0');
		}
		d=m%n;
		int ans=gcd(n,d);
		printf("%d\n",ans);
	}
         } 
	return 0;
}
