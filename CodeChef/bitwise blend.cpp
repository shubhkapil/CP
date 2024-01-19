#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t,n,i,f=0,c1,c0,c,p0=0,p1=0;
	vector <int> v,vc0,vc1,v0,v1;
	vector <pair<int, int> > ans;
	cin>>t;
	
	while(t--)
	{
		cin>>n;
		long long num;
		
		for(i=0;i<n;i++)
		{
			cin>>num;
			if(num%2==0)
			{
				v.push_back(0);
			}
			else
			{
				v.push_back(1);
			}
		}
		
		if(accumulate(v.begin(), v.end(), 0)==0 || accumulate(v.begin(), v.end(), 0)==n)
		{
			cout<<"-1"<<endl;
		}
		
		else
		{
			
			i=n-1;
			while(i>0 && p0==0 && p1==0)
			{
				if(v.at(i)==1)
				{
					p1=i;
				}
				else if(v.at(i)==0)
				{
					p0=i;
				}
				i--;
			}
			
			
			for(i=0;i<n;i+=2)
			{
				if(i%2==0)
				{
					vc0.at(i)=0;
					vc0.at(i+1)=1;
					vc1.at(i)=1;
					vc1.at(i+1)=0;
				}
				
			}
			
			for(i=0;i<vc0.size();i++)
			{
				cout<<vc0.at(i);
			}cout<<endl;
			
			for(i=0;i<vc1.size();i++)
			{
				cout<<vc1.at(i);
			}cout<<endl;
			
			for(i=0;i<v.size();i++)
			{
				cout<<v.at(i);
			}cout<<endl;
			
			for(i=0;i<n;i++)
			{
				if(v.at(i)!=vc0.at(i))
				{
					c0++;
				}
				else if(v.at(i)!=vc1.at(i))
				{
					c1++;
				}
			}
			cout<<"c0:"<<c0<<" c1:"<<c1<<endl;
			c=min(c0,c1);
			cout<<c<<endl;
			
			i=0;
			
			while(i<n)
			{
				if(c==c0)
				{
					if(v.at(i)!=vc0.at(i))
					{
						v0.push_back(i);	
					}	
				}
				else
				{
					if(v.at(i)!=vc1.at(i))
					{
						v1.push_back(i);	
					}	
				}	
			}
			
			for(i=0;i<v0.size();i++)
			{
				cout<<v0.at(i);
			}cout<<endl;
			for(i=0;i<v0.size();i++)
			{
				cout<<v0.at(i);
			}			
			
			if(c==c0)
			{
				cout<<v0.size();
				for(i=0;i<v0.size();i++)
				{
					if(v0.at(i)==1)
					{
						cout<<v0.at(i)<<" "<<p0<<endl;
					}
					else
					{
						cout<<v0.at(i)<<" "<<p1<<endl;
					}
				}	
			}
			else
			{
				cout<<v1.size();
				for(i=0;i<v1.size();i++)
				{
					if(v1.at(i)==1)
					{
						cout<<v1.at(i)<<" "<<p0<<endl;
					}
					else
					{
						cout<<v1.at(i)<<" "<<p1<<endl;
					}
				}
			}
		}
		
	}
	return 0;
}
