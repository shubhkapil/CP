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

int solve(char arr[][10])
{
	int ans = 0;
	int top = 0;
	int end = 9;
	int left = 0;
	int right = 9;

	while(top<end && left<right)
	{
		int cnt = 0;
		for(int j=left;j<right;j++)
		{
			if(arr[top][j]=='X')
				cnt++;
		}
		for(int i=top;i<end;i++)
		{
			if(arr[i][right]=='X')
				cnt++;
		}
		for(int j=right;j>left;j--)
		{
			if(arr[end][j]=='X')
				cnt++;
		}
		for(int i=end;i>top;i--)
		{
			if(arr[i][left]=='X')
				cnt++;
		}
		top++;
		end--;
		left++;
		right--;
		ans += (top)*cnt;
	}

	return ans;
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
		char arr[10][10];
		for(int i = 0;i<10;i++)
		{
			for(int j = 0;j<10;j++)
				cin>>arr[i][j];
		}
		cout<<solve(arr)<<" "<<endl;
	}
}