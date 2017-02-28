#include<iostream>
using namespace std;
int main(){
	long double x=2.0,y=1.0;
	long double e=0.00000000000000000000001;
	while(x-y>e){
		x=(x+y)/(2.0);
		y=(2.0)/x;
	}
	cout<<x;
	return 0;
}
