#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,x;
	cin>>t;
	
	while(t--)
	{
		cin>>x;
		
		if(x<4)
		{
			if(x==1)
			{
				cout<<"East"<<endl;
			}
			else if(x==2)
			{
				cout<<"South"<<endl;
			}
			else if(x==3)
			{
				cout<<"West"<<endl;
			}
		}
		else
		{
			if(x%4==0)
			{
				cout<<"North"<<endl;
			}
			else if(x%4 ==1)
			{
				cout<<"East"<<endl;
			}
			else if(x%4 ==2)
			{
				cout<<"South"<<endl;
			}
			else if(x%4 ==3)
			{
				cout<<"West"<<endl;
			}
		}
	}
	
	return 0;
}
