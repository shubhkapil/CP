
#include<bits/stdc++.h>
#define ll long long
using namespace std;

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
		int n;
		cin>>n;

		vector<ll> v{6,8,12};

		if(n>3)
		{
			int i = 2;
			n-=3;
			while(n-->0)
			{
				v.push_back(v[i-1]+v[i]+5);
				i++;
			}
		
		}
		
		for(int ele : v)
			cout<<ele<<" ";
		cout<<endl;
	}
}