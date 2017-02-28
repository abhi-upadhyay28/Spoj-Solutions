#include<iostream>
using namespace std;
int main(){
	int n,x,y;
	cin>>n;
	while(n--){
		int ans=-1;
		cin>>x>>y;
		if(x==y){
			if(x%2==0)
			cout<<2*x<<endl;
			else
			cout<<2*x-1<<endl;
		}
		else if(y==x-2){
		if(x%2==0)
		cout<<x+y<<endl;
		else
		cout<<x+y-1<<endl;			
		}
		else
       cout<<"No Number"<<endl;
		
	}

}
