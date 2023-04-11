#include<bits/stdc++.h>
using namespace std;

typedef long long LL;

int main()
{
 	LL n,k;
 	while(cin>>n>>k)
 	{
 		LL a=0,b=0;
 		LL sum=n;
		while(n>=k)
		{
			a=n/k;
			b=n%k;
			sum+=a;
			n=a+b;
		}
		cout<<sum<<endl;
	}
 	return 0;
}
