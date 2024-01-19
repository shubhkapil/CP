#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
	string s;
	cin>>s;
	ll n = s.size();
	if(n<=10)
		cout<<s<<endl;
	else
		cout<<s[0]<<n-2<<s[n-1]<<endl;
}
int main()
{
	#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif
	ll t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}

