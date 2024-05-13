
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

int count_digi(int n)
{
	int cnt = 0;
	while(n>0)
	{
		cnt++;
		n/=10;
	}
	return cnt;
}
int countZero(int n)
{
	int cnt = 0;
	while(n%10==0)
	{
		cnt++;
		n/=10;
	}
	return cnt;
}

bool sortZero(vector<int>& v1,vector<int>& v2)
{
	return v1[1]>v2[1];
}




void solve()
{
	int n,m;
	cin>>n>>m;
	vector<int> v = oneD(n);

	vector<vector<int>> leading0;
	for(int i = 0;i<n;i++)
	{
		if(v[i]%10==0)
			leading0.push_back({v[i],countZero(v[i])});
	}
	int cnt = 0;

	for(int i = 0;i<n;i++)
	{
		if(v[i]%10!=0)
		{
			cnt+=count_digi(v[i]);
		}
	}
	sort(leading0.begin(),leading0.end(),sortZero);
	
	
	for(int i = 0;i<leading0.size();i++)
	{
		int t = count_digi(leading0[i][0]);
		if(i%2==0)
			cnt += t-leading0[i][1];
		else
			cnt += t;
	}

	cout<<((cnt<m+1) ? "Anna" : "Sasha")<<endl;

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