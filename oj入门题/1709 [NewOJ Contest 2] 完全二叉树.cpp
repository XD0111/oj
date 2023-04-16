#include<bits/stdc++.h>
using namespace std;

int main()
{
 	int n=2022,sum=0;
	for(int i=1;;i++)
	{
		sum=pow(2,i)-1;
		if(sum>=n)
		{
			sum=sum-pow(2,i-1);
			cout<<n-sum;
			return 0;
		}
	}
 	return 0;
}
