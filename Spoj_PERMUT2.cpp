#include<iostream>
using namespace std;
int main(){                // Couldn't understand question ..saw codechef discussion forum....
	int n,i;
	while(1){
		cin>>n;
		if(n==0)
		break;
		string s;
		int a[n],b[n];
		for(i=0;i<n;i++)
		cin>>a[i];
		for(i=0;i<n;i++)
		b[a[i]-1]=i+1;
		for(i=0;i<n;i++)
		{
			if(a[i]==b[i])
			s="ambiguous";
			else
			{
				
				s="not ambiguous";
				break;
			}
		}
		cout<<s<<"\n";
		
	}
	return 0;
}
