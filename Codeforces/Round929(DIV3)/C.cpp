
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

int find_max_power(ll i,ll n)
{
	int cnt = 0;
	while(n%i==0)
	{
		cnt++;
		n/=i;
	}
	return cnt;
}

bool is_coprime(ll a,ll b)
{
	if(a%b==0 || b%a==0)	return false;
	for(int i =2;i<=sqrt(min(a,b));i++)
	{
		if(a%i==0 && b%i==0)
			return false;
	}
	return true;
}

void solve()
{
	ll a,b,l;
	cin>>a>>b>>l;

	int temp = l;
	set<int> s;
	s.insert(temp);
	while(temp%a==0 && temp>0)
	{
		s.insert(temp/a);
		temp/=a;
	}
	int temp2 = temp;
	s.insert(temp);
	while(temp%b==0 && temp>0)
	{
		s.insert(temp/b);
		temp/=b;
	}
	s.insert(temp);
	while(temp2%b==0 && temp2<l)
	{
		s.insert(temp2/b);
		temp2*=a;
		temp2/=b;
	}
	s.insert(temp2);

	cout<<s.size()<<endl;

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