#include<bits/stdc++.h>
using namespace std;

int main()
{
 	int x=1,y=0;
 	char a;
 	while(cin>>a)
 	{
 		if(a=='A')
 			x=x+y;
 		else if(a=='B')
 			y=x+y;
 		else if(a=='C')
 			x=2*x+y;
 		else if(a=='D')
 			y=x+2*y;
 		cout<<x+y<<endl;
	}
 	return 0;
}
