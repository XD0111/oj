#include<bits/stdc++.h>
using namespace std;

typedef long long LL;

LL reverse(LL a)
{
	vector<LL>b;
	LL c,d=0;
	while(a)
	{
		c=a%10;
		b.push_back(c);
		a/=10;
	}
	
	for(int i=0;i<b.size();i++)
	{
		d+=b[i]*(pow(10,b.size()-i-1));
	}
	return d;
}

int main()
{
 	LL a,b;
	while(cin>>a>>b)
	{
		a=reverse(a);
		b=reverse(b);
		LL d=reverse(a+b);
		cout<<d<<endl;
	}
 	return 0;
}
