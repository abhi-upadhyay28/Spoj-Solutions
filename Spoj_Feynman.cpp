#include<iostream>
using namespace std;
int main(){
	int n,sum;
	while(1)               // AC IN ONE GO :D
	{
	cin>>n;
	sum=0;
	if(n==0)
	break;
	if(n==1)
	sum=1;//cout<<"1"<<"\n";
	else
	sum=(n*(n+1)*(2*n+1))/6;
	cout<<sum<<endl;
}
return 0;
	
}
