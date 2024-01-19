#include<bits/stdc++.h>
using namespace std;


int solve(int a,int b,int c,int d,int x,int I)
{
	int cov,cos,sum=0;
	int	i=1;
	while(x>=0 && i<=4)
	{
		cov= a+(i-1)*b; 
		cos= c+(i-1)*d;
		x-=min(cov,cos);
		if(x>=0)
		{
			sum++;
		}
		else
		{
			break;
		}
		i++;
	}
	return sum;
}
int main()
{

	int I,i,x,j=2,a,b,c,d,p,q,r,s,t,m,ans;
	cin>>I;
	cin>>x>>a>>b>>c>>d;
	cin>>p>>q>>r>>s>>t>>m;
	
	ans = solve(a,b,c,d,x,I);
	
	cout<<ans<<endl;
	
	for(j=1;j<I;j++)
	{
		a= (a+ans*t)%(m+p);
		b= (b+ans*t)%(m+q);
		c= (c+ans*t)%(m+r);
		d= (d+ans*t)%(m+s);
		cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
		ans=solve(a,b,c,d,x,I);
		cout<<ans<<endl;
	}
	
	return 0;
}
