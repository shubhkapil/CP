
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

	vector<int> v1 = oneD(n);
	vector<int> v2 = oneD(n);
	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());

	int i = 0,j=0;
	int cnt = 0;
	while(i<n && j<n)
	{
		if(v1[i]>v2[j])
		{
			cnt++;
			j++;
		}
		else
		{
			i++;
			j++;
		}

	}
	cout<<cnt<<endl;
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