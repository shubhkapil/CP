
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
	int a,b,c;
	cin>>a>>b>>c;
	cout<< max(a+b+c,max(a*b*c,max((a+b)*c,max((a*b)+c,max(a+(b*c),a*(b+c))))));
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