#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,sum;
	while(1){
		cin>>t;
		if(t==-1)
		break;
		int arr[t];
		for(int i=0;i<t;i++)
		cin>>arr[i];
		sum=0;
		int count=0;
		for(int i=0;i<t;i++)
		sum+=arr[i];
		if(sum%t==0)
		{
			int r=sum/t;
			//int max=arr[0];
			for(int i=0;i<t;i++)
			{
			  if(arr[i]>r)
			  count=count+arr[i]-r;
			  
			  //count=r-arr[i];
			}
			cout<<count<<"\n";
		}
		else
		cout<<"-1"<<"\n";
		
	}
}

