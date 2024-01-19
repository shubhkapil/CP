
#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool isValid(int a, int b,int c)
{
	if(a==b || b==c || a==c)	return false;
	else if(a%3==0 || b%3==0 || c%3==0)	return false;

	return true;
}



vector<ll> solve(ll n)
{
	ll sumi = 0;
	ll x,y,z;
	ll s = 1;
	ll e = n;
	while(s<=e)
	{
		ll mid = (e-s)/2 + s;

		ll s1 = 1;
		ll e1 = n;
		while(s1<=e1)
		{
			ll mid1 = (e1-s1)/2 + s1;

			ll s2 = 1;
			ll e2 = n;

			while(s2<=e2)
			{
				ll mid2 = (e2-s2)/2 + s2;
				sumi = mid1+mid2+mid;
				if(isValid(mid,mid1,mid2) && sumi==n)
					return {mid,mid1,mid2};

				else if((sumi) > 0)
					e2 = mid2-1;
				else
					s2 = mid2+1;

			}
			if(sumi>n)
				e1 = mid1-1;
			else
				s1 = mid1+1;
		}
		if(sumi>n)
			e = mid-1;
		else
			s = mid+1;
	}

	return {-1};
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
		
		vector<ll> v = solve(n);
		if(v.size()==1)
			cout<<"NO"<<endl;
		else
		{
			cout<<"YES"<<endl;
			for(ll i: v)
				cout<<i<<" ";
			cout<<endl;
		}

	}
}