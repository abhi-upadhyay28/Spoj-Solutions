#include<bits/stdc++.h>
using namespace std;
int main(){
	int c;                 // Gave wrong answer when 2d array of strings were used !!!!
	string s;
	while(1)
	{
		scanf("%d",&c);
		if(c==0)
		break;
		cin>>s;
		int n=s.length();
		int r=n/c;
	//	cout<<r<<endl;
	char ans[r][c];
		//string ans[r];
		int cnt=0;
		int i,j,k=0;
		for(i=0;i<r;i++)
		{
			if(cnt%2==0)
			{
				for(j=0;j<c;j++)
				{
					ans[i][j]=s[k];
					k++;
				}
			}
			else
			{
			for(j=c-1;j>=0;j--)
			{
				ans[i][j]=s[k];
				k++;
			}
		}
		cnt++;
	}
	int m,z;
	string qtr="";
	for(m=0;m<c;m++)
	{
		for(z=0;z<r;z++)
		{
		qtr=qtr+ans[z][m];
		//k++;
	    }
	}
	cout<<qtr<<"\n";
 }
return 0;
}
