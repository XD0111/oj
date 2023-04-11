#include<bits/stdc++.h>
using namespace std;

typedef long long LL;
const int mod=32767,N=1e6+10;
LL a[N];

void func()
{
	a[1]=1,a[2]=2;
	for(LL i=3;i<=N;i++)
		a[i]=2*a[i-1]%mod+a[i-2]%mod;
}

int main()
{
 	int t;
 	cin>>t;
 	func();
 	while(t--)
 	{
 		LL n;
		cin>>n;
		cout<<a[n]%mod<<endl; 
	}
 	return 0;
}
