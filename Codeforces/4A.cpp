
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
	ll n ;
	cin>>n;
	if(n>2 && n%2==0)
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