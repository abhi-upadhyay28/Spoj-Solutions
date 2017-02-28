#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){        // Expecting AC in one go!!!
		int e,n;
		cin>>e>>n;
		int min1=min(e,n);
		int max1=max(e,n);
		int ta;
		if(min1>max1/2)
		ta=(min1+max1)/3;
		else
		ta=min1;
		cout<<ta<<"\n";
	}
	return 0;
}
