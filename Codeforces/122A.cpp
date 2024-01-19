
#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool isLucky(int n )
{
	while(n>0)
	{
		if(n%10!=4 && n%10!=7)
			return false;
		n=n/10;
	}
	return true;
}

bool isDivisible(int n)
{
	for(int i = 1;i<n;i++)
	{
		if(n%i==0 && isLucky(i))
			return true;
	}
	return false;
}

void solve()
{
	ll n ;
	cin>>n;
	bool ans = isLucky(n) | isDivisible(n);
	if(ans)	cout<<"YES";
	else cout<<"NO";
	return;
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
	freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
	#endif
	
		solve();
	
}