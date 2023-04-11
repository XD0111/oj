#include<bits/stdc++.h>
using namespace std;

int main()
{
 	double x,y;
 	while(cin>>x)
 	{
 		y=abs(exp(x)-x-1);
		printf("%.6lf\n",y);
	}
 	return 0;
}
