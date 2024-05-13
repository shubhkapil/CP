
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

void solve()
{
	int n;
	cin>>n;
	vector<int> v = oneD(n);

	ll sumi = 0;

	for(int i :v)
		sumi+=i;
	int m  = sumi%3;

	if(m==0)
		cout<<"0"<<endl;
	else
	{
		int f = 1;
		for(int i:v)
		{
			if(i%3==m)
			{
				cout<<"1"<<endl;
				f=0;
				break;
			}
		}
		if(f)
			cout<<3-m<<endl;
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
		solve();
	}
}