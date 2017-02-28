#include<iostream>
using namespace std;
int main(){
	int n=1, count=0;
	while(n!=0){
		cin>>n;
		if(n==0)
		break;
		count++;
		int a=n%6;
		switch(a){
			case 1: cout<<"Case "<<count<<": Anjan"<<endl;
			break;
			case 2: cout<<"Case "<<count<<": Sufian"<<endl;
			break;
			case 3: cout<<"Case "<<count<<": Alim"<<endl;
			break;
			case 4: cout<<"Case "<<count<<": Shipu"<<endl;
			break;
			case 5: cout<<"Case "<<count<<": Sohel"<<endl;
			break;
			default: cout<<"Case "<<count<<": Sumon"<<endl;
			break;
		}
	}
	return 0;
}
