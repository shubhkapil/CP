#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i=0,j=1,sumi=0,sumj=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	i=0;
	while(i<=n/2 || j<=((n/2)+1))
	{
		sumi+=a[i];
		sumj+=a[j];
		i+=2;
		j+=2;
	}
	
	cout<<2*(min(sumi,sumj));
	return 0;

}
