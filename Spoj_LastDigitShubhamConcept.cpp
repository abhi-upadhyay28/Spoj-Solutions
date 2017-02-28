#include<iostream>
using namespace std;
int pows(int a, long long int b);
int main(){
	int a;
	long long int b;
	int t;
	cin>>t;
	while(t--){
		cin>>a>>b;
		pows(a,b);
	}
	return 0;
}
int pows(int a, long long int b){
	int c;
	int f=a%10;
	if(f==0)
	cout<<"0"<<endl;
	else if(f==1)
	cout<<"1"<<endl;
	else if(f==2)
	{
		c=b%4;
		if(c==0)
		cout<<"6"<<endl;
		else if(c==1)
		cout<<"2"<<endl;
		else if(c==2)
		cout<<"4"<<endl;
		else if(c==3)
		cout<<"8"<<endl;
	}
	else if(f==3)
	{
		c=b%4;
		if(c==0)
		cout<<"1"<<endl;
		else if(c==1)
		cout<<"3"<<endl;
		else if(c==2)
		cout<<"9"<<endl;
		else if(c==3)
		cout<<"7"<<endl;
	}
	else if(f==4)
	{
		c=b%2;
		if(c==0)
		cout<<"6"<<endl;
		else if(c==1)
		cout<<"4"<<endl;
	}
	else if(f==5)
	cout<<"5"<<endl;
	else if(f==6)
	cout<<"6"<<endl;
	else if(f==7)
	{
		c=b%4;
		if(c==0)
		cout<<"1"<<endl;
		else if(c==1)
		cout<<"7"<<endl;
		else if(c==2)
		cout<<"9"<<endl;
		else if(c==3)
		cout<<"3"<<endl;
	}
	else if(f==8)
	{
		c=b%4;
		if(c==0)
		cout<<"6"<<endl;
		else if(c==1)
		cout<<"8"<<endl;
		else if(c==2)
		cout<<"4"<<endl;
		else if(c==3)
		cout<<"2"<<endl;
	}
	else if(f==9)
	{
		c=b%2;
		if(c==0)
		cout<<"1"<<endl;
		else if(c==1)
		cout<<"9"<<endl;
	}
}
