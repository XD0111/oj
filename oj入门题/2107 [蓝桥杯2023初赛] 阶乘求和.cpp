#include<bits/stdc++.h>
using namespace std;

typedef long long LL;

int main()
{
 	LL sum=0,num;
    for(int i=1;i<=90;i++)
	{
        num=1;
        for(int j=1;j<=i;j++)
		{
            num*=j;
            num%=1000000000;
        }
        sum+=num;
        sum%=1000000000;
	}
	cout<<sum;
 	return 0;
}
