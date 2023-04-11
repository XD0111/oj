#include<bits/stdc++.h>
using namespace std;

int main()
{
 	int x;
 	while(cin>>x)
 	{
 		if(x>=0)
 			cout<<"0";
 		else
 			cout<<"1";
 		x=abs(x);
 		for(int i=15;i>0;i--)
 		{
 			if(x<(1<<(i-1)))
 				cout<<"0";
 			else
 			{
 				cout<<"1";
 				x-=(1<<(i-1));
			}
		}
		puts("");
	}
 	return 0;
}
