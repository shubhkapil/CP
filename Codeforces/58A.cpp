
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
	string s;
	cin>>s;
	string ref = "hello";
	ll j=0;
	for(ll i =0;i<s.size();i++)
	{
		if(s[i]==ref[j])
			j++;
	}
	
	if(j==5)
		cout<<"YES";
	else
		cout<<"NO";
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