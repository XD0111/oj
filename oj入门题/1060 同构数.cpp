#include<bits/stdc++.h>
using namespace std;

typedef long long LL;

bool func(LL x)
{
	LL x1=x*x;
	while(x)
	{
		if(x%10!=x1%10)
			return false;
		else
		{
			x/=10;
			x1/=10;
		}
	}
	return true;
}

int main()
{
 	LL n;
 	cin>>n;
 	for(LL i=1;i<=n;i++)
 		if(func(i))
 			cout<<i<<" ";
 	return 0;
}
