#include<bits/stdc++.h>
using namespace std;

typedef long long LL;

LL func(LL n)
{
	LL sum=0,i;
	while(n)
	{
		i=n%10;
		sum+=i;
		n/=10;
	}
	return sum;
}
	
int main()
{
 	string n;
 	cin>>n;
	LL sum = 0;
	for (int i=0;i<n.size();i++)
		sum+=n[i]-'0';
	while(sum>=10)
		sum=func(sum);
	cout<<sum;
 	return 0;
}
