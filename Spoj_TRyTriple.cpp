#include<iostream>
#include<vector>
using namespace std;
//int arr[2000000001];
int main(){
	int t;
	
	long long int k,i;


	cin>>t;
	while(t--){
		cin>>k;
		vector<long long int>v;
		v.push_back(0);
		v.push_back(192);
	for(i=2;i<=k;i++)
    v[i]=v[i-1]+250;
		cout<<v[k]<<endl;
	}
	return 0;
}
