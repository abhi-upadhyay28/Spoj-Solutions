#include<iostream>
#include<string>
using namespace std;
int main(){
	//char ch1,ch2;                      // using character variables there was a problem !!!!
	string a;
	cout<<"Ready"<<"\n";
	while(getline(cin,a){  
		//cin>>ch1>>ch2;            
		string s;
		if((a[0]==' ')&&(a[1]==' '))
	     break;
		else if((a[0]=='q'&&a[1]=='p')||(a[0]=='p'&&a[1]=='q'))
		s="Mirrored pair";
		else if((a[0]=='d'&&a[1]=='b')||(a[0]=='b'&&a[1]=='d'))
		s="Mirrored pair";
		else
		s="Ordinary pair";
		cout<<s<<"\n";
	}
	return 0;
}
