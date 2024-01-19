#include<bits/stdc++.h>
using namespace std;


//
//int find(map<int,int> temp,int ele)
//{
//	for(std::map<int,int>::iterator it = temp.begin(); it != temp.end(); ++it)
//		{
//			if(it->first==ele)
//			{
//				return 1;
//			}
//		}
//		return 0 ;
//}
//
//int check(vector<int> v, int ele)
//{
//	for(std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)
//		{
//			if(*it==ele)
//			{
//				return 1;
//			}
//		}
//		return 0 ;
//}
//
//int main()
//{
//	map<int,int> m1;
//	vector <int> ve,vv;
//	int ele;
//	int t,n,x,i;
//	cin>>t;
//	
//	while(t--)
//	{
//		int c=0;
//		cin>>n>>x;
//		for(i=0;i<n;i++)
//		{
//			cin>>ele;
//			if(find(m1,ele))
//			{
//				m1[ele]+=1;
//			}
//			else
//			{
//				m1[ele]=1;
//			}
//		}
//		
//		for(std::map<int,int>::iterator it = m1.begin(); it != m1.end(); ++it)
//		{
//			ve.push_back(it->first);
//			vv.push_back(it->second);
//		}
//		
//		int e = *max_element(ve.begin(), ve.end());
//		
//		for(std::map<int,int>::iterator it = m1.begin(); it != m1.end(); ++it)
//		{
//			int temp = it->first^x;
//			
//			if(check(ve,temp) && temp==e)
//			{
//				c++;
//			}
//			else if(check(ve,temp))
//			{
//				int w=it->second +1;
//				it->second=w;
//			}
//		}
//		e = *max_element(ve.begin(), ve.end());
//		cout<<m1[e]<<" "<<c<<endl<<endl;
//	}
//	return 0;
//}

int check(vector<int> v,int e)
{
	int i;
	for(i=0;i<v.size();i++)
	{
		if(v[i]==e)
		{
			return 1;
		}
	}
	return 0;
}


int main()
{
	int t,n,x,c,i;
	cin>>t;
	vector<int> ve,vv;
	while(t--)
	{
		cin>>n>>x;
		int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];	
			if(check(ve,a[i]))
			{
				int val=vo[i]
				vo[i]= val + 1;
			}
			else
			{
				ve[i]=e;
				vo[i]=1;
			}
		}
		
		for(i=0;i<ve.size();i++)
		{
			int a=ve[i]^x;
			
			if(check(vo,a))
			{
				int val2=vo[i];
				vo[i]=val2+1;
				c++;
			}
			
		}
		int mx= *max_element(vo.begin(), vo.end());
		cout<<mx<<" "<<c;
		return 0;
	}
}
