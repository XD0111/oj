#include<bits/stdc++.h>
using namespace std;

int main()
{
 	int n;
 	while(cin>>n)
 	{
 		int x1,y1,x2,y2;
 		cin>>x1>>y1>>x2>>y2;
 		while(n--)
 		{
 			int a,b;
 			cin>>a>>b;
 			if(a<=x2&&a>=x1&&b>=y1&&b<=y2)
 				puts("YES");
 			else
 				puts("NO");
		}
		puts("");
	}
 	return 0;
}
