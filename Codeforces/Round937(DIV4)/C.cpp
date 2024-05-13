
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


// void solve()
// {
// 	string s;
// 	cin>>s;
// 	string h = s.substr(0,2);
// 	string m = s.substr(3,2);
// 	int hr = 0;
// 	if(s[0]!='0')
// 		hr = stoi(h);


// 	if(h=="00")
// 	{
// 		cout<<"12:"<<m<<" AM";
// 	}
// 	else if(hr>12)
// 	{
// 		hr-=12;
// 		cout<<"0"<<to_string(hr)<<":"<<m<<" PM";
// 	}
// 	else if(hr==12)
// 	{
// 		cout<<s<<" PM";
// 	}
// 	else
// 		cout<<s<<" AM";
// 	cout<<endl;
// }
string convert_to_12hr(const string& time_str) {

  try {
    stringstream ss(time_str);
    int hours, minutes;
    char colon;

    ss >> hours >> colon >> minutes;

    if (hours < 0 || hours > 23 || minutes < 0 || minutes > 59) {
      return "Invalid time format.";
    }

    string period = (hours >= 12) ? "PM" : "AM";
    hours = (hours == 0) ? 12 : (hours > 12) ? hours - 12 : hours;

    stringstream formatted_time;
    formatted_time << setw(2) << setfill('0') << hours << ":"
                   << setw(2) << setfill('0') << minutes << " " << period;

    return formatted_time.str();
  } catch (const invalid_argument&) {
    return "Invalid time format.";
  }
}
void solve()
{
	string s;
	cin>>s;
	cout<<convert_to_12hr(s)<<endl;
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