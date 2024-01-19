#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,s,i;
	cin>>t;
	
	while(t--)
	{
		cin>>n>>s;
		
		i=0;
		int j=0;
			if(n<=s)
			{
				while(1)
				{
				if(i>n)
				{
					n-=1;
					i=0;
				}
				else
				{
					
					if((n+i)==s)
					{
						break;
					}
					i++;
				}
				}
				cout<<n-i<<endl;
			}
			
			else
			{
				while(1)
				{
				
				if(i>n)
				{
					j+=1;
					i=0;
				}
				else
				{
					if((j+i)==s)
					{
						break;
					}
				}
				i++;
				
				}
				cout<<abs(j-i)<<endl;
			}
		
		
	}
	return 0;
}
