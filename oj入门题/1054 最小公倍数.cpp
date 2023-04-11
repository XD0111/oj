#include<bits/stdc++.h>
using namespace std;

typedef long long LL;

LL gcd(LL a,LL b)
{
	return b?(gcd(b,a%b)):a;
}

int main()
{
 	LL a,b;
 	while(cin>>a>>b)
 	{
		cout<<a*b/gcd(a,b)<<endl;
	}
 	return 0;
}
