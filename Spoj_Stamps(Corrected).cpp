#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t,i,ns,tf;

	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>ns>>tf;
		int st[tf];
		for(int j=0;j<tf;j++)
		cin>>st[j];
		sort(st,st+tf);
		int sum=0,cnt=0;
			string res="";
		for(int j=tf-1;j>=0;j--)
		{
			sum+=st[j];
			cnt++;
			if(sum>ns||sum==ns)
			{
				break;
			}
			else if(sum<ns&&cnt==tf)
			{
				res="impossible";
				break;
			}
			else
			continue;
		}
		if(sum>ns||sum==ns)
		{
		cout<<"Scenario"<<" #"<<i+1<<":\n";
		cout<<cnt<<"\n\n";
		}
		else
	   {  
			cout<<"Scenario"<<" #"<<i+1<<":\n";
		cout<<res<<"\n\n";
	    }
}
return 0;
}

