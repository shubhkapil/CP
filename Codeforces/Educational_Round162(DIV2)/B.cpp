
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

// string solve()
// {
// 	ll n,k;
// 	cin>>n>>k;
// 	vector<int> a = oneD(n);
// 	vector<int> x = oneD(n);

// 	map<int,int> mp;

// 	for(int i =0;i<n;i++)
// 		mp[x[i]]=a[i];

// 	vector<int> px,nx;

// 	for(int i:x)
// 	{
// 		if(i<0)
// 			nx.push_back(i);
// 		else
// 			px.push_back(i);
// 	}
// 	reverse(nx.begin(),nx.end());


// 	int energy = k;

// 	int i = 0;
// 	int j = 0;
// 	while(i<px.size() && j<nx.size())
// 	{
// 		if(px[i]==abs(nx[j]))
// 		{
// 			//req energy
// 			int req = mp[px[i]] + mp[nx[j]];
// 			if(req>energy)
// 				return "NO";
// 			energy-=req;
// 			i++;
// 			j++;
// 		}
// 		else if(px[i]>abs(nx[j]))
// 		{
// 			int req = mp[nx[j]];
// 			if(req>energy)
// 				return "NO";
// 			energy-=req;
// 			j++;
// 		}
// 		else
// 		{
// 			int req = mp[px[i]];
// 			if(req>energy)
// 				return "NO";
// 			energy-=req;
// 			i++;
// 		}
// 		energy+=k;
// 	}
// 	cout<<k<<endl;
// 	while(i<px.size())
// 	{
// 		cout<<px[i]<<" "<<k<<endl;
// 		int req = mp[px[i]];
// 		if(req>energy)
// 			return "NO";
// 		energy-=req;
// 		i++;
// 		energy+=k;
// 	}
// 	while(j<nx.size())
// 	{
// 		int req = mp[nx[j]];
// 		if(req>energy)
// 			return "NO";
// 		energy-=req;
// 		j++;
// 		energy+=k;
// 	}

// 	return "YES";
// }

// string solve2()
// {
// 	ll n,k;
// 	cin>>n>>k;
// 	vector<int> a = oneD(n);
// 	vector<int> x = oneD(n);
// 	int maxi = 0;

// 	for(int i: x)
// 		maxi = max(abs(i),maxi);

// 	map<int,int> mp;

// 	for(int i =0;i<n;i++)
// 		mp[x[i]]=a[i];

// 	vector<int> px,nx;

// 	for(int i:x)
// 	{
// 		if(i<0)
// 			nx.push_back(i);
// 		else
// 			px.push_back(i);
// 	}
// 	reverse(nx.begin(),nx.end());
// 	int i = 0,j=0,l=1;
// 	int energy = k;
// 	while(i<px.size() && j<nx.size() && l<=maxi)
// 	{
// 		if(px[i]==l)
// 		{
// 			if(energy<mp[px[i]])
// 				return "NO";
// 			energy-= mp[px[i]];
// 			i++;
// 		}
// 		if(abs(nx[j])==l)
// 		{
// 			if(energy<mp[abs(nx[j])])
// 				return "NO";
// 			energy-= mp[nx[j]];
// 			j++;
// 		}
// 		energy+=k;
// 		l++;
// 	}
// 	while(i<px.size() && l<=maxi)
// 	{
// 		if(px[i]==l)
// 		{
// 			if(energy<mp[px[i]])
// 				return "NO";
// 			energy-= mp[px[i]];
// 			i++;
// 		}
// 		energy+=k;
// 		l++;
// 	}
// 	while(j<nx.size() && l<=maxi)
// 	{
// 		if(abs(nx[j])==l)
// 		{
// 			if(energy<mp[abs(nx[j])])
// 				return "NO";
// 			energy-= mp[nx[j]];
// 			j++;
// 		}
// 		energy+=k;
// 		l++;
// 	}

// 	return "YES";
// }

string solve3()
{
	ll n,k;
	cin>>n>>k;
	vector<int> a = oneD(n);
	vector<int> x = oneD(n);
	int maxi = 0;
	int sumi = 0;
	for(int i: x)
		maxi = max(abs(i),maxi),sumi+=i;

	vector<int> px,nx;
	map<int,int> mp;

	for(int i =0;i<n;i++)
		mp[x[i]]=a[i];

	for(int i:x)
	{
		if(i<0)
			nx.push_back(i);
		else
			px.push_back(i);
	}
	reverse(nx.begin(),nx.end());
	int first;

	if(px.size()>0 && nx.size()>0)
		first = (px[0]==abs(nx[0])) ? mp[px[0]]+mp[nx[0]] : ((px[0]>abs(nx[0])) ? mp[nx[0]] : mp[px[0]]);
	else if(nx.size()==0)
		first = mp[px[0]];
	else
		first = mp[nx[0]];

	if(k>=first && sumi<=maxi*k)
		return "YES";
	return "NO";
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
		cout<<solve3()<<endl;
	}
}