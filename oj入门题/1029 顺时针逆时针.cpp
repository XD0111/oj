#include<bits/stdc++.h>
using namespace std;

int main()
{
 	int x1,y1,x2,y2,x3,y3;
 	while(cin>>x1>>y1>>x2>>y2>>x3>>y3)
 	{
 		int d=(x3-x1)*(y2-y1)-(y3-y1)*(x2-x1);
 		if(d==0)
 			puts("Collineation");
 		else if(d<0)
 			puts("Anticlockwise");
 		else
 			puts("Clockwise");
	}
 	return 0;
}
