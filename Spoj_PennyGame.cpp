#include<iostream>
using namespace std;
int main(){
	int t,n;
	string s;
     cin>>t;
	while(t--)
	{
		cin>>n;
		cin>>s;
		int a[8]={0};
		int i;
		for(i=0;i<=37;i++)
		{
			if(s[i]=='T'&&s[i+1]=='T'&&s[i+2]=='T')
			a[0]++;
			else if(s[i]=='T'&&s[i+1]=='T'&&s[i+2]=='H')
			a[1]++;
			else if(s[i]=='T'&&s[i+1]=='H'&&s[i+2]=='T')
			a[2]++;
			else if(s[i]=='T'&&s[i+1]=='H'&&s[i+2]=='H')
			a[3]++;
			else if(s[i]=='H'&&s[i+1]=='T'&&s[i+2]=='T')
			a[4]++;
			else if(s[i]=='H'&&s[i+1]=='T'&&s[i+2]=='H')
			a[5]++;
			else if(s[i]=='H'&&s[i+1]=='H'&&s[i+2]=='T')
			a[6]++;
			else if(s[i]=='H'&&s[i+1]=='H'&&s[i+2]=='H')
			a[7]++;
		}
		cout<<n<<" ";
		for(i=0;i<8;i++)
		cout<<a[i]<<" ";
		cout<<"\n";
	}
	return 0;
}
