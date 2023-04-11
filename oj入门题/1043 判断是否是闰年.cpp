#include<bits/stdc++.h>
using namespace std;

int main()
{
 	int n;
 	while(cin>>n)
 	{
 		if(n%4==0&&n%100!=0||n%400==0)
 			puts("YES");
 		else
 			puts("NO");
	}
 	return 0;
}
