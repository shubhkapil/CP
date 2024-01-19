#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
	int n;
	cin>>n;
	if(n & n-1 == 0)
	{
		cout<<"1";
		return;
	}
	else
	{
		int val = 1;
		while(val*2 < n)
			val*=2;
		cout<<n-val+1;
	}

}


int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
	freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
	#endif
	
	solve();	
}
