#include<bits/stdc++.h>
using namespace std;

int main()
{
 	double x;
 	int n;
 	double num;
 	cin>>x>>n;
 	for(int i=1;i<=n;i++)
 	{
 		num=x+i;
		x=sqrt(num);
	}
 	printf("%.2lf\n",x);
 	return 0;
}
