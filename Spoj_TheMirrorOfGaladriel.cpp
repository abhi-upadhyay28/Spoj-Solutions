#include<iostream>
#include<string>
using namespace std;             // AC in one attempted :D !!!
void palin(string s)
{
	int n=s.length();
	int flag=0;
	for(int i=0,j=n-1;i<=j;i++,j--)
	{
		if(s[i]==s[j])
		flag=1;
		else{
		flag=0;
		break;
	}
}
if(flag==1)
cout<<"YES"<<"\n";
else
cout<<"NO"<<"\n";
}
int main(){
	int t;
	cin>>t;
	string s;
	while(t--)
	{
		cin>>s;
		palin(s);
	}
	return 0;
}
