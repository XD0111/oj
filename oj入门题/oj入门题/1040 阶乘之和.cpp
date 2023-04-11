#include<bits/stdc++.h>
using namespace std;

typedef long long LL;
const int mod=998244353;
const int N=1e6+10;
LL sum[N];

int main()
{
 	LL n;
 	LL s=1;
 	for(int i=1;i<=N;i++)
 	{
 		s=s*i%mod;
 		sum[i]=(sum[i-1]+s)%mod;
 	}
 	while(cin>>n)
 	{
 		cout<<sum[n]<<endl;
	}
 	return 0;
}
