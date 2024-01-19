#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,n,t,i,c0=0,c1=0,ans=0;
	string s;
	cin>>t;
	while(t--)
	{
		c1=0;
		c0=0;
		cin>>n>>a>>b;
		cin>>s;
		for(i=0;i<n;i++)
		{
			if(s[i]=='1')
			{
				c1++;
			}
			else
			{
				c0++;
			}

		}
		ans=(c0*a + c1*b);
		cout<<ans<<endl;
	}
	return 0;
}
