#include<bits/stdc++.h>
using namespace std;

int main()
{
 	double a,b,c,s;
 	while(cin>>a>>b>>c)
 	{
 		s=a*b*sin(c*3.1415928/180)/2;
 		printf("%.2f\n",s);
	}
 	return 0;
}
