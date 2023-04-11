#include<bits/stdc++.h>
using namespace std;
const int N=210;
char a[N][N];

int main()
{
 	int n;
 	while(cin>>n)
 	{
		for(int i=1;i<=n;i++)
		{
			for(int j = i;j<=n-1;j++)
				printf(" ");
			for(int j = 1;j<=2*i-1;j++)
				printf("*");
			puts("");
		}
		puts("");
	}
 	return 0;
}
