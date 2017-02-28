#include<iostream>
#include<set>
using namespace std;
long long int a[500001];
int main(){                        // Correct accepted .... fatty's logic!!!!
	int k,i,j,x;
	
	set<int>s;
	a[0]=0;
	//a[1]=1;
	for(i=1;i<500001;i++)
	{
		x=a[i-1]-i;
		if(x>0&&s.count(x)==0)
		{
			
			a[i]=x;
			s.insert(x);
		}
		else
		{
			x=a[i-1]+i;
			a[i]=x;
			s.insert(x);
		}
	          

}
	while(1)
	{
		cin>>k;
		if(k==-1)
		break;
		cout<<a[k]<<"\n";
		
	}
	return 0;
}
