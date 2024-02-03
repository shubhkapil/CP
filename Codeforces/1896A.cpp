
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

bool solve(int n,vector<int> v)
{
	if(isSorted(v)) return true;


	int cnt = 0;

	do
	{
		cnt = 0;
		for(int i = 1;i<n-1;i++)
		{
			if(v[i]>v[i-1] && v[i]>v[i+1])
			{
				cnt++;
				swap(v[i],v[i+1]);
				i++;
			}
		}
	}while(!isSorted(v) && cnt>0);

	return isSorted(v);
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
	freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
	#endif
	ll t;
	cin>>t;
	int n;
	while(t--)
	{
		cin>>n;
		vector<int> v = oneD(n);
		solve(n,v) == true ? cout<<"YES" : cout<<"NO";
		cout<<endl;
	}
}