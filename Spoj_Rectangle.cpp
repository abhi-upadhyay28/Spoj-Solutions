#include<iostream>          // Unique areas ...AC in one Go!!!! :D
using namespace std;
int main(){
	int n,count=0;
	cin>>n;
	for(int i=1;i*i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			if(i*j<=n)
			count++;
		}
	}
	cout<<count;
	return 0;
}
