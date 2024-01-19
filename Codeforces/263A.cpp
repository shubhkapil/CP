
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
	int ti,tj;
	int a[5][5];
	for(int i = 0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cin>>a[i][j];
			if(a[i][j]==1)
			{	
				ti = i; tj = j;
			}
		}
	}
	cout<<abs(ti-2) + abs(tj-2);
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
	freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
	#endif

		solve();
}