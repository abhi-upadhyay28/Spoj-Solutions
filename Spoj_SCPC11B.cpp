#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n,i;
	while(1){
		cin>>n;
		if(n==0)
		break;
		int a[n+1];
		for(i=0;i<n;i++)
		cin>>a[i];
		a[n]=1522;               // Necessary for return journey !!!! After adding this AC in second go!!!!
		sort(a,a+n+1);
		int flag=0;
		for(i=0;i<n;i++)
		{
			if(a[i+1]-a[i]<=200)
	          flag=1;
	          else
	          {
	          	flag=0;
	          	break;
			  }
		}
		if(flag==1)
		cout<<"POSSIBLE"<<"\n";
		else
		cout<<"IMPOSSIBLE"<<"\n";
	}
	return 0;
}
