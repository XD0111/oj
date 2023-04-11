#include<bits/stdc++.h>
using namespace std;
const int N=50;
int a[N][N];

struct ed{
	int i,j;
	int nums;
}e[N];

int main()
{
 	int n,m,k=0;
 	cin>>n>>m;
 	for(int i=0;i<n;i++)
 		for(int j=0;j<m;j++)
 		{
 			cin>>a[i][j];
 			if(a[i][j])
 			{
 				e[k].i=i;
 				e[k].j=j;
 				e[k].nums=a[i][j];
 				k++;
			}
 		}
 	cout<<n<<" "<<m<<" "<<k<<endl;
 	for(int i=0;i<k;i++)
 	{
 		 cout<<e[i].i<<" "<<e[i].j<<" "<<e[i].nums<<endl;
	}
 	return 0;
}
