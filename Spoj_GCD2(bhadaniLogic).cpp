#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){                     // Gives AC !!!!
	if(b==0)
	return a;
	else
	return gcd(b,a%b);
}
int min(string s,int n)
{
	int tot=s.length();
	int t=0;
	int i;
	for(i=0;i<tot;i++){
		if(t<n)
		{
			t=t*10+int(s[i]-'0');
		}
		else
		{
			t=t%n;
			i--;
		}
	}
	return t;
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
		if(n==0&&s[0]!='0')
		{
			cout<<s<<"\n";
		//printf("0\n");
		//continue;
	    }
	else if(tot==1&&s[0]=='0'&&n==0)
	{
		printf("0\n");
		//continue;
	}
	else if(s[0]=='0'&&n!=0)
	printf("%d\n",n);
	else{
        int t=min(s,n);
		int ans=gcd(n,t);
		printf("%d\n",ans);
	}
}
	return 0;
}
