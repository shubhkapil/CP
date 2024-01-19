#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

int main()
{
	int t,n,k;
	cin>>t;
	int i,t1,t2,j;
	while(t--)
	{
		int p=0;
		cin>>n>>k;
		char s[n];
		for(i=0;i<n;i++)
		{
			cin>>s[i];
		}
		for(i=0;i<n;i++)
		{
			if(s[i]=='*')
			{
				s[i]='X';
				t1=i;
				p++;
				break;
			}
		}
		for(i=n;i>0;i--)
		{
			if(s[i]=='*')
			{
				s[i]='X';
				t2=i;
				p++;
				break;
			}
		}
		for(i=0,j=n;(i<j && j>i);i++,j--)
		{
			if(s[i]=='*' && ((i-t1)<=k))
			{
				s[i]='X';
				t1=i;
				p++;
			}
			if(s[i]=='*' && ((t2-j)<=k))
			{
				s[i]='X';
				t2=j;
				p++;
			}
		}
		
		cout<<p;
	}
	return 0;
}
