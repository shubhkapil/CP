
#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> oneD(int n)
{
	vector<int> v(n);
	for(int i = 0;i<n;i++)
		cin>>v[i];
	return v;
}

bool isSorted(vector<int> v)
{
	for(int i = 0;i<v.size()-1;i++)
	{
		if(v[i+1]<v[i])
			return false;
	}
	return true;
}

int solve()
{
	int n;
	cin>>n;
	vector<int> v = oneD(n);
	if(!isSorted(v))
		return 0;

	
	int min_diff = INT_MAX;
	for(int i = 1;i<n;i++)
		min_diff = min(min_diff,v[i]-v[i-1]);
	
	return (min_diff/2) + 1;

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
		cout<<solve()<<endl;
	}
}