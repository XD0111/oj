#include<bits/stdc++.h>
using namespace std;

int main()
{
 	int a,b,c;
 	double s;
 	while(cin>>a>>b>>c)
 	{
 		if(a==0&&b==0&c==0)
 			return 0;
		if(a+b>c&&a+c>b&&b+c>a)
 		{
 			s=sqrt((a+b+c)*(a+b-c)*(a+c-b)*(b+c-a))/4;
 			printf("%.2lf\n",s);
 		}
		else
			cout<<"No"<<endl;	
	}
 	return 0;
}
