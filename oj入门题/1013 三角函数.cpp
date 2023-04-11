#include<bits/stdc++.h>
using namespace std;

int main()
{
 	int x;
 	while(cin>>x)
 	{
 		double sum=0,x1=0;
 		x1=x*3.1415927/180;
 		sum=(double)(sin(x1)+cos(x1)+tan(x1)+1/sin(x1)+1/cos(x1)+1/tan(x1));
		printf("Sum=%.2f\n",sum);
	}
 	return 0;
}
