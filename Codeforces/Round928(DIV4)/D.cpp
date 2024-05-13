
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

	int arr[n][31];

	for(int i = 0;i<n;i++)
	{
		int j = 30;
		while(v[i]>0)
		{
			arr[i][j] = v[i]%2;
			v[i]/=2;
			j--;
		}
		j++;

		while(j--)
		{
			arr[i][j] = 0;
		}
	}

	int ans = INT_MIN;
	for(int i = 0 ;i<31;i++)
	{
		int cnt0 = 0;
		int cnt1 = 0;
		for(int j = 0;j<n;j++)
		{
			if(arr[j][i]==0)
				cnt0++;
			else
				cnt1++;
		}
		ans = max(ans,max(cnt0,cnt1));
	}

	cout<<ans<<endl;
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