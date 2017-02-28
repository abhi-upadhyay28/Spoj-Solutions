#include<iostream>
using namespace std;
 long int a[500001];
int main(){
	int k,i,j;
	a[0]=0;
	a[1]=1;           // Showing TLE!!!!!!!!!!!
	for(i=2;i<=500000;i++)
	{
		if(a[i-1]-i>0)
		{
			for(j=0;j<i;j++)
			{
				if(a[j]==(a[i-1]-i))
				break;
				else if(a[j]!=(a[i-1]-i)&&j==i-1)
				{
				a[i]=a[i-1]-i;
				break;
			}
		}
		if(a[j]==(a[i-1]-i))
			a[i]=a[i-1]+i;
		
	}
		else{
			a[i]=a[i-1]+i;
		}
	}
		
	while(1)
	{
		cin>>k;
		if(k==-1)
		break;
		cout<<a[k]<<"\n";
		
	}
	return 0;
}
