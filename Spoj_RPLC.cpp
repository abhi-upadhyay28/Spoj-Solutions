#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	long long int n,sum,cnt=0,i,count,ans;
	while(t--){
		int b=0;
		cin>>n;
		cnt++;
		count=0;
		long long int a[n];
		for(i=0;i<n;i++)
		cin>>a[i];
		for(i=0;i<n;i++)
		sum+=a[i];
		if(sum<0){
			sum=-sum;
			ans=sum+1;
		}
		else
		{
			for(i=0;i<n;i++){
				count+=a[i];
				if(count<0)
				{
				b=1;
				break;
				}
			}
			if(b==1){
				count=-count;
				ans=count+1;
				}
		else
		ans=1;
	}
		cout<<"Scenario "<<"#"<<cnt<<": "<<ans<<"\n";
	}
	return 0;
}
