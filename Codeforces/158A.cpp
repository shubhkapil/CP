#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
	ll n,k;
	cin>>n>>k;
	int a[n];

	for(int i = 0;i<n;i++)
		cin>>a[i];
	if(a[k-1]<=0)
	{
		ll cnt = 0;
		for(ll i=0;i<k;i++)
		{
			if(a[i]>0)	cnt++;
		}
		cout<<cnt;
		return;
	}
	ll cnt = k;
	for(ll i = k;i<n;i++)
	{
		if(a[i]==a[k-1])
			cnt++;
	}
	cout<<cnt;
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