#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	long long int n,s;
	cin>>t;
	
	while(t--)
	{
		int sum1=0;
		cin>>n>>s;
		
		sum1=n*(n+1)/2;
		
		long long int ans=sum1-s;
				
	    if(ans<0 || ans>n)
		{
			cout<<-1<<endl;
		}
		
		else
		{
		    cout<<ans<<endl;
		}
		
	}
	return 0;
}

