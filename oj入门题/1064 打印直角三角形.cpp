#include<bits/stdc++.h>
using namespace std;

int main()
{
 	int n;
 	while(cin>>n)
	{
		for(int i=0;i<n;i++)
		{
 			for(int j=0;j<=i;j++)
 				cout<<"*";
 			puts("");
 		}
 		puts("");
	}
 	return 0;
}
