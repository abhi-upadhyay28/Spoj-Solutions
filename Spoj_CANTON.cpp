#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int num,sum=0;
		cin>>num;
		int i;
		for(i=1; ;i++)
		{
		sum+=i;
		if(sum>=num)
		break;
	}
	int total=i+1;
	int temp=num-(sum-i);
	if(i%2==0)
	cout<<"TERM "<<num<<" IS "<<temp<<"/"<<total-temp<<"\n";
	else
	cout<<"TERM "<<num<<" IS "<<total-temp<<"/"<<temp<<"\n";
	}
	return 0;
}
