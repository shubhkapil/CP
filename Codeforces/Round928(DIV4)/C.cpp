
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

long long sumi(int n)
{
	long long ans = 0;
	while(n>0)
	{
		ans += (n%10);
		n/=10;
	}
	return ans;
}

int temp(int n)
{
	long long ans=0;
	for(int i=1;i<=n;i++)
		ans+=sumi(i);
	return ans;
}

void solve()
{
	int n;
	cin>>n;
	int a[6] = {46,901,13501,180001,2250001,27000001};
	int i = 4;
	long long ans = 0;

	while(n>=10)
	{
		int temp = 10;
		int p = 1;
		while(n>temp)
		{
			temp*=10;
			p++;
		}
		p--;
		int val = pow(10,p);
		int divi = n/val;
		
		
		n = n%val;
		cout<<p<<" "<<divi<<n<<endl;
		ans += (a[p-1]*divi + (divi-1)*pow(10,p));

		cout<<ans<<endl;
	}
	cout<<n<<endl;
	
	ans += n*(n+1)/2;
	cout<<ans<<endl;
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