#include<bits/stdc++.h>
using namespace std;

int main()
{
 	double x,y;
 	cout<<fixed<<setprecision(2);
 	while(cin>>x)
 	{
 		if(x<=3)
 			y=6;
 		else
 			y=6+1.4*(x-3);
 		cout<<y<<endl;
	}
 	return 0;
}
