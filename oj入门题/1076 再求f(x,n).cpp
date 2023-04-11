#include<bits/stdc++.h>
using namespace std;

double func(double x,double n)
{
	if(n==1)
		return (x/(x+1));
	else
		return x/(n+func(x,n-1));
}

int main()
{
 	double x,n;
 	cin>>x>>n;
 	printf("%.2lf",func(x,n));
 	return 0;
}
