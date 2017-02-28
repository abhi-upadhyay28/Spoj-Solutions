#include<iostream>
using namespace std;
int main(){
	float a[3];
	string s;
	for(int i=0;i<100000;i++)
	{
	for(int i=0;i<3;i++)
	  cin>>a[i];
	  if(a[0]==0&&a[1]==0&&a[2]==0)
		break;
	float r;
	r=a[1]-a[0];
	if(a[2]-a[1]==r)
	{
	s="AP";
	cout<<s<<" "<<a[2]+r<<"\n";
	continue;	
}
else
{
	r=a[1]/a[0];
	if(a[2]/a[1]==r)
	{
		s="GP";
		cout<<s<<" "<<r*r*r*a[0]<<"\n";
		continue;
		}
}
}
	return 0;
}
