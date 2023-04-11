#include<bits/stdc++.h>
using namespace std;

int main()
{
 	int n;
 	cin>>n;
	double r,s,p=3.14159;
 	for(int i=1;i<=n;i++)
 	{
 		cin>>r;
 		s=p*r*r;
 		printf("Case %d: %.3f\n",i,s);
	}
 	return 0;
}
