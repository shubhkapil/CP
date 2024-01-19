
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
	ll m,n,a;
	cin>>m>>n>>a;
	ll hori=0,vert=0;
	
	hori = ((m>=a) && (m%a==0)) ? (m/a) : (m/a)+1;
	vert = ((n>=a) && (n%a==0)) ? (n/a) : (n/a)+1;

	if(hori==0 && vert==0)	cout<<"1";
	else if(min(hori,vert)==0) cout<<max(hori,vert);
	else	cout<<hori*vert;
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
	freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
	#endif

	solve();
}