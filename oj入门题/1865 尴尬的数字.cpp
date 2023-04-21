#include<bits/stdc++.h>
using namespace std;

string a,b;

int get(string s,int b)
{
	int res=0;
	for(auto c:s)
	{
		res=res*b+c-'0';
	}
	return res;
}

int main()
{
 	cin>>a>>b;
 	unordered_set<int> s;
 	for(auto &c:a)
 	{
 		c^=1;
 		s.insert(get(a,2));
 		c^=1;
	}
	for(auto &c:b)
	{
		char t=c;
		for(int i=0;i<3;i++)
		{
			if(i+'0'!=t)
			{
				c=i+'0';
				int x=get(b,3);
				if(s.count(x))
				{
					cout<<x<<"\n";
					return 0;
				}
			}
		}
		c=t;
	}
 	return 0;
}
