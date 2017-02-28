#include<iostream>
using namespace std;
void fact(int n);
int multiply(int a[],int i,int resize);
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		fact(n);
		}
return 0;
}
void fact(int n){
	int a[300];
	a[0]=1;
	int resize=1,i;
	for(i=2;i<=n;i++){
		resize=multiply(a,i,resize);
	}
	for(int i=resize-1;i>=0;i--)
	{
		cout<<a[i];
	}
	cout<<"\n";
}
int multiply(int a[], int i,int resize){
	int prod,carry=0;
	for(int m=0;m<resize;m++){
		prod=a[m]*i+carry;
		a[m]=prod%10;
		carry=prod/10;
	}
	while(carry){
		a[resize]=carry%10;
		carry=carry/10;
		resize++;
	}
	return resize;
}
