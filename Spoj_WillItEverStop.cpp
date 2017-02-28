#include<iostream>
using namespace std;
bool power(unsigned long long int n )
{
	return (n&&(n&(n-1))==0);                     // done!!!! 
}
int main(){
	unsigned long long int n;
	cin>>n;
	//cout<<power(n);
	while(n>1)
	{
			if(power(n)==1)
			{
				cout<<"TAK";
				break;
			}
	    else if(n%2==0)
		{
			n=n/2;
			if(n%2==0)
			{
			cout<<"NIE";
			break;
			}
		
		}
		else
		{
		  n=3*n+3;
		/*  if(power(n)==1)
		  {
		  	cout<<"TAK";
		  	break;
		  }      */
	}
}
	return 0;
}
