#include<iostream>
#include<string>
using namespace std;
int palin(string k){              // Take time .... Not done yet !!!!
	int ta=0,i,j,n;
	n=k.length();
	for(i=0,j=n-1;i<=j;i++,j--)
	{
		if(k[i]==k[j])
		{
			ta=1;
			continue;
		}
		else
		{
			ta=0;
			break;
		}
	}
	return ta;
	
}
int main(){
	int t;
	cin>>t;
    string k;
    
	while(t--){
		cin>>k;
		int len=k.length();
		k[n-1]=k[n-1]+1;
		while(1){
			int check=palin(k);
			if(check==1)
			{
				cout<<k<<"\n";
				break;
			}
			else
			{
			cout<<"NO"<<"\n";
			break;
		}
		}
	
	}
	return 0;
}
