#include<iostream>
using namespace std;
int main(){                          // AC in one go!!!!!
	float c;
	//int n=2;
	while(1)
     {
		cin>>c;
		if(c==0)
		break;
		float sum=0;
		int n=2;
	while(sum<=c){
		sum=sum+(float)1/(float)n;
		n++;
	}
	cout<<n-2<<" card(s)\n";
	
}
return 0;
}
