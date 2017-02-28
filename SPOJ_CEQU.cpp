#include<iostream>
using namespace std;
int gcd(int a,int b);
int main()
{
	int a,b,t,c,d,count=0;
	cin>>t;
  for(int i=1;i<=t;i++)
	{
		 count++;
	cin>>a>>b>>c;
	 d=gcd(a,b);
	if(c%d==0)
	{
		cout<<"Case "<<count<<":"<<" Yes"<<endl;
	}
	else
	cout<<"Case "<<count<<":"<<" No"<<endl;
}
	return 0;
}
int gcd(int a,int b){
	if(b==0)
	return a;
	else
	return gcd(b,a%b);
	}
