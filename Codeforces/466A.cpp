
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
	int n,m,a,b;
	cin>>n>>m>>a>>b;
	int cost1 = n*a;
	int cost2 = (n/m)*b + (n - n/m)*a;

	cout<<min(cost1,cost2);


}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
	freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
	#endif
	solve();
}