#include<iostream>
using namespace std;  // Ac after CE :c
int main(){
	int a[1001];
	a[0]=0;
	a[1]=5;
	a[2]=12;
	int i,n;
	for(i=3;i<=1000;i++)
	a[i]=a[i-1]+3*i+1;
	while(1){
		cin>>n;
		if(n==0)
		break;
	cout<<a[n]<<"\n";
	}
	return 0;
}
