#include<iostream>
using namespace std;
long long int k[2000000000001];
int main(){
	k[0]=0;
	k[1]=192;
	long long int i,t,ki;
	for(i=2;i<2000000000001;i++)
	{
	    //if((float)i%4<=a)
	    k[i]=k[i-1]+250;
	}
	cin>>t;
	while(t--)
	{
		cin>>ki;
		cout<<k[ki]<<"\n";
	}
	return 0;
	
}
