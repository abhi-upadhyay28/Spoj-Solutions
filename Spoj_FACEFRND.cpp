#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n;
	int two[n][100];
	for(int i=0;i<n;i++)
	{
		cin>>two[i][0]>>two[i][1];
		for(int j=0;j<two[i][1];j++)
		cin>>two[i][j];
	}
	cout<<"I am the best"<<"\n";
	for(int i=0;i<n;i++)
	{
		cout<<two[i][0]<<" "<<two[i][1];
		for(int j=0;j<two[i][1];j++)
		cout<<two[i][j]<<" ";
	}
	return 0;
	
}
