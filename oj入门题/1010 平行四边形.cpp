#include<bits/stdc++.h>
using namespace std;

int main()
{
 	int a1,a2,b1,b2,c1,c2,d1,d2;
 	while(cin>>a1>>a2>>b1>>b2>>c1>>c2)
 	{
 		d1=c1+a1-b1;
		d2=c2+a2-b2;
		printf("D(%d,%d)\n",d1,d2);	
	}
 	return 0;
}
