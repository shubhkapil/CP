
#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> oneD(int n)
{
	vector<int> v;
	int ele;
	for(int i = 0;i<n;i++)
	{
		cin>>ele;
		v.push_back(ele);
	}
	return v;
}

bool isSorted(vector<int> v)
{
	vector<int> sv = v;
	sort(sv.begin(),sv.end());
	return v==sv;
}

bool solve()
{
	int n;
	cin>>n;
	vector<int> v = oneD(n);

	if(n==2)
		return __gcd(v[0],v[1])<=2
	int prev = v[0];

	for(int i = 0;i<n-1;i++)
	{
		if(__gcd(prev,v[i+1])<=i+2)
		{
			
		}
		for(int j = i+1;j<n;j++)
		{
			if(__gcd(prev,v[j] )<)
		}
	}

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
		bool a = solve();
		cout<< (a ? "YES" : "NO");
	}
}