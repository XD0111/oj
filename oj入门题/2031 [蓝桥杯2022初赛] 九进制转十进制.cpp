#include<bits/stdc++.h>
using namespace std;

typedef long long LL;

int main()
{
 	string a;
 	cin>>a;
 	LL sum=0,k=1;
 	for(int i=a.length()-1;i>=0;i--)
 	{
 		sum+=k*(a[i]-'0');
 		k*=9;
 		cout<<a[i]<<endl;
 		cout<<sum<<endl;
	}
	//cout<<sum;
 	return 0;
}
