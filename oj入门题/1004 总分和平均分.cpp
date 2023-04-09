#include<bits/stdc++.h>
using namespace std;

int main()
{
 	int a,b,c;
 	while(cin>>a>>b>>c)
 	{
 		int sum=a+b+c;
		double ave=(double)sum/3;
		printf("%d\n%.2f\n",sum,ave);
	}
 	return 0;
}
