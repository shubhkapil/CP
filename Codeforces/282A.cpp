
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
	ll n;
	cin>>n;
	string s;
	int val = 0;
	for(ll i = 0;i<n;i++)
	{
		cin>>s;
		if(s=="++X" || s=="X++")	val++;
		else if(s=="--X" || s=="X--") val--;

	}
	cout<<val;

}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
	freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
	#endif
	
		solve();
}