#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
	ll n;
	cin>>n;

	ll a[3];
	ll ans = 0;
	for(ll i = 0;i<n;i++)
	{
		cin>>a[0]>>a[1]>>a[2];

		if(a[0]+a[1]+a[2]>=2)
			ans++;
	}
	cout<<ans<<endl;
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
	freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
	#endif
	solve();
}