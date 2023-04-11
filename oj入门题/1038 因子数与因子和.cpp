#include<bits/stdc++.h>
using namespace std;

typedef long long LL;

int main()
{
 	int n;
 	while(cin>>n)
 	{
 		LL sum=0,sum1=0;
 		for(int i=1;i<=n/i;i++)
 		{
 			if(n%i==0)
 			{
 				if(i==sqrt(n)&&n/i==i)
 				{
 					sum++;
 					sum1+=i;
				}
				else
				{
					sum+=2;
					sum1=sum1+i+n/i;
				}
 			}
		}
		cout<<sum<<" "<<sum1<<endl;
	}
 	return 0;
}
