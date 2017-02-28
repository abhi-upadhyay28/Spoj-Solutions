#include<iostream>
#include<algorithm>
#include<string>
using namespace std;                         // Showing TLE!!!! :C 
int main(){
	string a,b;
	while(!cin.eof())
	{
		string res="";
		cin>>a>>b;
	//	if(b=="")
       // break;
		int i,j;
		int n1=a.length();
		int n2=b.length();
		for(i=0;i<n1;i++)
		{
			for(j=0;j<n2;j++)
			{
				if(a[i]==b[j])
				{
				res=res+a[i];
				break;
			}
			
			}

		}
		char ch;
		int n3=res.length();
		for(i=0;i<n3;i++)
		{
			for(j=0;j<n3-i-1;j++)
			{
				if(res[j]>res[j+1])
				{
					ch=res[j];
					res[j]=res[j+1];
					res[j+1]=ch;
					
				}
			}
		}
	//	sort(res,res+n3);
		cout<<res<<"\n";
		}
		return 0;
	
}
