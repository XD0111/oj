#include<bits/stdc++.h>
using namespace std;

int main()
{
 	double a,b,c,d;
 	while(cin>>a>>b>>c>>d)
 	{
 		double dist=sqrt(pow(c-a,2)+pow(d-b,2));
 		printf("%.2f\n",dist);
	}
 	return 0;
}
