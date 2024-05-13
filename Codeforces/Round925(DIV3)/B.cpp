
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

	int a[n];

	int total = 0;
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		total+=a[i];
	}

	if(total%n==0)
	{
		int divi = total/n;
		vector<int> v(n,0);

		v[0]=a[0];
		
		if(a[0]<divi)
		{
			cout<<"NO"<<endl;
			return;
		}
		for(int i = 1;i<n;i++)
		{
			v[i] = v[i-1] + a[i];
			if(v[i]<(divi*(i+1)))
			{
				cout<<"NO"<<endl;
				return;
			}
		}
		cout<<"YES"<<endl;

	}
	else
		cout<<"NO"<<endl;
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