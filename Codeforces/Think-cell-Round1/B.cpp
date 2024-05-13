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

	// deque<int> d;
	// d.push_back(1);
	// vector<int> added(n+1,0);
	// added[1] = 1;

	// for(int i = 2;i<=n;i++)
	// {
	// 	if(added[i]!=0) continue;
	// 	added[i] += 1;
	// 	d.push_back(i);

	// 	for(int j = 2;i*j<=n;j++)
	// 	{
	// 		int val = i*j;
	// 		if(added[val]==0)
	// 		{
	// 			d.push_front(val);
	// 			added[val] += 1;
	// 		}
	// 	}
	// }

	vector<int> d;
	int even = (n%2==0 ? n : n-1);
	int odd = (n%2==0 ? n-1 : n);

	while(even>0 && odd>0)
	{	
		d.push_back(odd);
		d.push_back(even);
		even-=2;
		odd-=2;
	}
	while(even>0)
	{
		d.push_back(even);
		even-=2;
	}
	while(odd>0)
	{
		d.push_back(odd);
		odd-=2;
	}

	for(int i=0; i<d.size()-1;i++)
		cout<<d[i]<<" ";
	cout<<d[d.size()-1];
	cout<<endl;

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