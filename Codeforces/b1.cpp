
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

bool solve()
{
	int n,m;
	cin>>n>>m;


	char arr[n][m];

	int f1=0,f2=0,f3=0,f4=0;
	int wcnt = 0,bcnt=0;
	int i,j;
	for(i = 0;i<n;i++)
	{
		for(j = 0;j<m;j++)
		{
		cin>>arr[i][j];

		if(i==0 && arr[i][j]=='W')
			f1++;
		if(i==n-1 && arr[i][j]=='W')
			f2++;
		if(j==m-1 && arr[i][j]=='W')
			f3++;
		if(j==0 && arr[i][j]=='W')
			f4++;
		if(arr[i][j]=='W')
			wcnt++;
		if(arr[i][j]=='B')
			bcnt++;
		}
	}

	cout<<wcnt<<" "<<bcnt<<endl;
	if(wcnt==n*m || bcnt==n*m)
		return true;

	int t = f1+f2+f3+f4;

	if(f1==0||f2==0||f3==0||f4==0)
		return false;
	int i1,j1,i2,j2;

	for(int i = 0;i<n;i++)
	{
		for(int j = 0;j<m;j++)
		{
			if(arr[i][j]=='w')
			{
				i1=i;
				j1=j;
				break;
			}
		}
	}

	for(int i = n-1;i>=0;i--)
	{
		for(int j = m-1;j>=0;j--)
		{
			if(arr[i][j]=='w')
			{
				i2=i;
				j2=j;
				break;
			}
		}
	}

	if(i1!=i2 && j1!=j2)
		return true;
	
	for(int i = 0;i<n;i++)
	{
		for(int j = 0;j<m;j++)
		{
			if(arr[j][i]=='w')
			{
				i1=i;
				j1=j;
				break;
			}
		}
	}

	for(int i = n-1;i>=0;i--)
	{
		for(int j = m-1;j>=0;j--)
		{
			if(arr[j][i]=='w')
			{
				i2=i;
				j2=j;
				break;
			}
		}
	}

	if(i1!=i2 && j1!=j2)
		return true;

	return false;
	
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
		bool ans = solve();
		if(ans)
			cout<<"YES";
		else
			cout<<"NO";
		cout<<endl;
	}
}