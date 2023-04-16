#include<bits/stdc++.h>
using namespace std;

const int N=60;
char a[N][N];

int main()
{
 	int sum=0;
 	for(int i=0;i<50;i++)
 	{
 		for(int j=0;j<50;j++)
 		{
 			cin>>a[i][j];
 			if(a[i][j]=='N')
 				sum++;
		}
	 }
 	cout<<sum;
 	return 0;
}
