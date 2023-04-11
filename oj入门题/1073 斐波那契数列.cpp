#include<bits/stdc++.h>
using namespace std;

const int mod=1000;
const int N=1e6+10;
typedef long long LL;
LL num[N];

int main()
{
 	LL m;
 	cin>>m;
 	for(LL i=1;i<=1000000;i++)
 	{
 		if(i==1||i==2)
 			num[i]=1%mod;
 		else
 			num[i]=num[i-1]%mod+num[i-2]%mod;
	}
 	while(m--)
 	{
 		LL n;
 		cin>>n;
 		cout<<num[n]%mod<<endl;
	}
 	return 0;
}
