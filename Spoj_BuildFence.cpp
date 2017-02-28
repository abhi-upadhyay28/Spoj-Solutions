#include<iostream>
#define pi 3.14159
using namespace std;                  // AC in one go!!!!
int main(){
	int l;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	float r;
	while(1){
		cin>>l;
		if(l==0)
		break;
		r=(float)l/(float)pi;
		float area=(pi*r*r)/2;
		cout<<area<<"\n";
	}
	return 0;
}
