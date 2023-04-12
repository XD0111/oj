#include<bits/stdc++.h>
using namespace std;

const int N=2010;

struct ed{
	string a,b;
}e[N];

int main()
{
 	int n,q;
 	cin>>n>>q;
 	for(int i=0;i<n;i++)
 	{
 		string a,b;
 		cin>>a>>b;
 		e[i].a=a,e[i].b=b;
	}
	for(int i=0;i<q;i++)
	{
		string c;
		cin>>c;
		for(int j=0;j<n;j++)
		{
			if(c==e[j].a)
				cout<<e[j].b<<endl;
			if(c==e[j].b)
				cout<<e[j].a<<endl;
		}
	}
 	return 0;
}
