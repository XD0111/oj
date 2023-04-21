#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int ans=0;
	for(int i=1;i<=100000000;i++)
	{
		vector<int> a;
		int tmp=i;
		while(tmp)
		{
			a.push_back(tmp%10);
			tmp/=10;
		}
		if(a.size()%2==0)
		{
			int sum1=0,sum2=0;
			for(int j=0;j<a.size()/2;j++)
			{
				sum1+=a[j];
				sum2+=a[j+a.size()/2];
			}
			if(sum1==sum2)
				ans++;
		}
	}
	printf("%d",ans);
    return 0;
}