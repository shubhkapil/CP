
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


// void printPattern(int N) {
//     string row;

//     for (int i = 0; i < N / 2; i++) {
//         row += "##..";
//     }

//     for (int i = 0; i < N; i++) {
//         string printed_row = row;
//         int dots_to_insert = (N - 1) - (2 * i);

//         if (dots_to_insert > 0) {
//             printed_row.insert(N / 2, dots_to_insert, '.');
//         }

//         cout << printed_row << endl;
//     }

//     for (int i = N - 2; i >= 0; i--) {
//         string printed_row = row;
//         int dots_to_insert = (N - 1) - (2 * i);

//         if (dots_to_insert > 0) {
//             printed_row.insert(N / 2, dots_to_insert, '.');
//         }

//         cout << printed_row << endl;
//     }
// }


void solve()
{
	int n;
	cin>>n;
	char ci = '#';

	for(int i = 0;i<n;i++)
	{
		char cj = ci;
		for(int j=0;j<n;j++)
		{
			cout<<cj<<cj;
			cj = (cj=='#') ? '.' : '#';
		}
		cj= ci;
		cout<<endl;
		for(int j=0;j<n;j++)
		{
			cout<<cj<<cj;
			cj = (cj=='#') ? '.' : '#';
		}
		
		ci = (ci=='#') ? '.' : '#';
		cout<<endl;
	}
	
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