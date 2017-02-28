#include<iostream>
using namespace std;
int main(){
	int a,b;
	long long int sum=0;
	int i;
	cin>>a>>b;
	i=a;
	while(i<=b)
	{
		sum+=(i*i);
		i++;
	}
	cout<<sum;
	return 0;
}
