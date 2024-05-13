
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

	if(n==1)
	{
		cout<<"0"<<endl;
		return;
	}
	int left = 1;
	int right = 1;

	
	int i = 1;
	while(v[i]==v[i-1])
	{
		left++;
		i++;
	}
	
	i = n-2;
	
	while(v[i]==v[i+1])
	{
		right++;
		i--;
	}

	

	if(v[0]==v[n-1])
	{
		cout<<max(0,n-(left+right))<<endl;
	}

	else
	{
		cout<<min(n-left,n-right)<<endl;
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