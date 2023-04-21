#include<bits/stdc++.h>
using namespace std;

typedef long long LL;
LL a[27];

int main()
{
 	string s;
 	cin>>s;
 	LL ant=0;
 	for(auto c:s)
 	{
 		a[c-'A'+1]++;
	}
	for(int i=1;i<=26;i++)
		ant=max(ant,a[i]);
	for(int i=1;i<=26;i++)
	{
		if(a[i]==ant)
			cout<<(char)(i+'A'-1);
	}
 	return 0;
}
