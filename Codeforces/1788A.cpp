
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
		cout<<"1"<<endl;
		return;
	}
	else if(n==2)
	{
		cout<<((v[0]==v[n-1]) ? "1" : "-1")<<endl;
		return;
	}


	int i = -1;
	int j = n;
	int left = 1;
	int right = 1;

	while(i<j && i+1!=j)
	{
		if(left>=right)
			right*=v[--j];
		else
			left*=v[++i];
	}
	cout<<i<<" "<<j<<" "<<left<<" "<<right<<endl;

	if(i+1==j && left == right)
		cout<<i<<endl;
	else
		cout<<"-1"<<endl;

	
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