#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,i,odd=0,even=0;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n],sum=0,k;
		
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		
		if(n%2==0)
		{
			odd=n/2;
			even=odd;
		}
		else
		{
			even=n/2;
			odd=even+1;
		}

		i=0;
		while(i<n && even>0 && odd>0)
		{

			if(a[i]%2==0)
			{
				a[i]+=1;
				odd--;
			}
			else
			{
				a[i]+=2;
				even--;
			}
			i++;

		}
	
		
		while(odd>0 && i<n)
		{
			a[i]+=1;
			i++;
		}
	
		
		while(even>0 && i<n)
		{
			a[i]+=2;
			i++;
		}
		
		for(i=0;i<n;i++)
		{
			sum+=a[i]%2;
		}
		
		cout<<sum<<endl;
		
	}
	return 0;
}
