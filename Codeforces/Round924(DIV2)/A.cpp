
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
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
	freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
	#endif
	ll t,a,b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;

		if(a%2!=0 && b%2!=0)
			cout<<"NO";
		else if(a%2==0 && b%2==0)
			cout<<"YES";
		else
		{
			int even = (a%2==0) ? a : b;
			int odd = (even==a) ? b : a;
			int half = even/2;
			int neven = even - half;
			int nodd = odd + half;

			if(neven == odd && nodd == even)
				cout<<"NO";
			else
				cout<<"YES";
		}
		cout<<endl;
	}
}