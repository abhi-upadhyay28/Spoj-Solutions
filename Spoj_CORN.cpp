#include<bits/stdc++.h>
#define pi 3.1415
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		//scanf("%s",st);
		string st,ra="",sa="",ha="";
		cin>>st;
		int i,n,j,k;
		n=st.length();
	//	cout<<n<<"\n";
		for(i=0;i<n;i++)
		{
			if(st[i]!='e')
			ra+=st[i];
			else
			break;
		}
		for(j=i+1;j<n;j++)
		{
			if(st[j]!='e')
			sa+=st[j];
			else
			break;
		}
		for(k=j+1;k<n;k++)
		{
			if(st[k]!='e')
			ha+=st[k];
		}
		//cout<<ra<<" "<<sa<<" "<<ha<<"\n";
		float r,s,h,l;
		r=atof(ra.c_str());
		s=atof(sa.c_str());
		h=atof(ha.c_str());
		l=sqrt(r*r+h*h);
		float ans=pi*l*r*s;
		if(ans-floor(ans)>=0)
		printf("%0.0lf\n",floor(ans+1));
		
	//	cout<<r<<" "<<s<<" "<<h<<"\n";
	
		
	}
	return 0;
}
