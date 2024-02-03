
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n)
{
	cout<<n<<" "<<"1";
	int i = 2;
	int j = n-1;

	while(j>=i)
	{
		if(i==j)
		{
			cout<<" "<<i;
			break;
		}
		cout<<" "<<j<<" "<<i;
		j--;
		i++;
	}
	cout<<endl;
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
		ll n;
		cin>>n;
		solve(n);
	}
}