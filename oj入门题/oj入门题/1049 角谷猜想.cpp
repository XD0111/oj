#include<bits/stdc++.h>
using namespace std;

typedef long long LL;

int main()
{
 	LL n;
 	while(cin>>n)
 	{
 		if(n!=1)
 		{
			while(n!=1)
			{
				if(n%2)
 				{
 					cout<<n<<"*3+1="<<3*n+1<<endl;
 					n=n*3+1;
				}
				else
				{
				cout<<n<<"/2="<<n/2<<endl;
				n/=2;
				}
			}
		}
		puts("End");
	}
 	return 0;
}
