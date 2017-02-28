#include<iostream>
using namespace std;
char bee[1000000001];
int main(){
	long long int sum=7;                 // Showing runtime error!!!
                                        // Accepted!!!!!!!
	int j=3;

	for(int i=0;i<=1000000000;i++)
	bee[i]='N';
		bee[1]='Y';
	bee[7]='Y' ;
	long long int x;
	//long long int j=3;
	while(sum<1000000000)
	{
		sum=sum+6*j-6;
		if(sum<=1000000000)
		bee[sum]='Y';
		j++;
	}
	while(1){
		cin>>x;
		if(x==-1)
		break;
		cout<<bee[x]<<"\n";
	}
	//cout<<bee[1]<<" "<<bee[2]<<" "<<bee[7]<<" "<<bee[4];
	return 0;
}
