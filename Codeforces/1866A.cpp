
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

int solve(vector<int> v)
{
	int ans = INT_MAX;
	for(int i = 0;i<v.size();i++)
	{
		if(v[i]==0)
			ans = 0;

		ans = min(ans,abs(v[i]));
	}

	return ans;
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
	freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
	#endif
	int n;
	cin>>n;
	vector<int> v = oneD(n);
	cout<<solve(v)<<endl;
}