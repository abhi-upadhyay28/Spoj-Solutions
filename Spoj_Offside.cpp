#include<bits/stdc++.h>
using namespace std;
int main(){                     // AC in one go!!!!!
	int a,d;
	while(1)
	{
		cin>>a>>d;
		if(a==0&&d==0)
		break;
		int att[a],def[d];
		int i,j,min;
		for(i=0;i<a;i++)
		cin>>att[i];
		for(j=0;j<d;j++)
		cin>>def[j];
		sort(def,def+d);
		//sort(att,att+)
		min=att[0];
		for(i=0;i<a;i++)
		{
			if(att[i]<min)
			min=att[i];
		}
			if(min<def[1])
			{
			cout<<"Y\n";
			continue;
		}
			else if(min>=def[1]||(min==def[0]&&min==def[1]))
			{
				cout<<"N\n";
				continue;
			}
		
		
	}
	return 0;
}
