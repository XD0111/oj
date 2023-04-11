#include<bits/stdc++.h>
using namespace std;

int main()
{
 	double x,y;
 	while(cin>>x>>y)
 	{
 		double res=1,b;
 		int a;
		if(x<0)
 			cout<<"NO"<<endl;
 		else
 		{
			res=pow(x,y);
			a=res/1;
			b=res-a;
			printf("%d %lf\n",a,b);
		}
	}
 	return 0;
}
