#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector <int> v;
	int n,j,k,sum=0,l;
	cin>>n>>k;
	v.assign(n,0);
	string s,s2;
	for(int i=0;i<k;i++)
	{
		cin>>s;
		if(s=="CLOSEALL")
		{
			sum=0;
		}
		else
		{
			l=s.size();
			s2=s.substr(6,l);
			j=stoi(s2);
			if(v[j]==0)
			{
				v[j]=1;
				sum++;
			}
			else
			{
				v[j]=0;
				sum--;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
