#include<bits/stdc++.h>
using namespace std;
int main(){                  // Did it in O(n^2) !!!!
	int count=0;
	//string str;
	char str[1000];
	int cnt=0;
	while(scanf("%s",str)!=EOF)
	{
		cnt++;
		int n=0,i,count=0,j;
		for(i=0;str[i]!='\0';i++)
		n++;
		for(i=0;i<n;i++)
		{
			if(str[i]=='1')
			{
				count++;
				for(j=i;j<n;j++)
				{
					if(str[j]=='1')
					str[j]='0';
					else
					str[j]='1';
				}
				if(j==n)
				continue;
			}
			else
			continue;
		}
		printf("Game #%d: %d\n",cnt,count);
        //cout<<n<<endl;
	}
	return 0;
}
