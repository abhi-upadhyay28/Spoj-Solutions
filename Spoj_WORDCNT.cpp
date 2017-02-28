#include<bits/stdc++.h>
//#include<string>
using namespace std;                  // Getting SIGSEGV !!!! Also problem is when string starts with spaces !!!
int main(){
	int t,an,cnt,cnt1;
	string st;
    cin>>t;
    getline(cin,st);
	int i,j;
while(t--)
	{
		getline(cin,st);
		int n;
		n=st.length();
		j=0;
		//cnt1=1;
		int b[21]={0};
		int a[21]={0};
		a[0]=-1000;
		b[0]=-9999;
		//an=1;
		for(i=0;i<n;i++)
		{
			cnt=0;
			if(i==0)
			{
				if(st[i]==' ')
				continue;
			  j=i;
			  while(st[j]!=' ')
			  {
			  	cnt++;
			  	j++;
			  }
			  an=cnt;
			b[cnt]++;
			a[cnt]++;
			i=j;
			continue;	
			}
			else{
			if(st[i]==' ')
			continue;
			j=i;
			while(st[j]!=' ')
			{
			cnt++;
			j++;
		    }
		    //an=cnt;
		    if(an==cnt)
			a[an]++;
			//b[an]++;
		    else
		    {
		    	//if(a[cnt]!=0)
		    	if(b[cnt]==0)
		    	{
				a[cnt]++;
				b[cnt]++;
		    	an=cnt;
		    }
		    else
		    goto hi;
		    }
		    hi:i=j;
		    continue;
		}
		}
		int max=a[1];
	//	printf("%d\n",n);
		for(i=1;i<21;i++)
		{
			if(max<a[i])
			max=a[i];
		}
		printf("%d\n",max);
	   }   
return 0;
}
