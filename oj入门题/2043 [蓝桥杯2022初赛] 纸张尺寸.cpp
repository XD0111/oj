#include<bits/stdc++.h>
using namespace std;

const int N=20;

struct paper{
	int a;
	int b;
}s[N];

int main()
{
 	s[0].a=1189,s[0].b=841;
 	for(int i=1;i<=9;i++)
 	{
 			s[i].a=s[i-1].b;
 			s[i].b=s[i-1].a/2;
	}
	string m;
	cin>>m;
	cout<<s[m[1]-'0'].a<<endl;
	cout<<s[m[1]-'0'].b<<endl;
 	return 0;
}
