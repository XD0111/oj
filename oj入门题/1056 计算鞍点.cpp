#include<bits/stdc++.h>
using namespace std;

const int N=6;

int main()
{
 	int a[N][N];
 	int i,j;
    for(i=1;i<=N-1;i++)
        for(j=1;j<=N-1;j++)
            cin>>a[i][j];
    for(i=1;i<=N-1;i++)
    {
    	int maxj=1;
        for(j=1;j<=N-1;j++)
            if(a[i][j]>a[i][maxj])
				maxj=j;
        int maxi=1;
        for(int k=1;k<=N-1;k++)
        	if(a[k][maxj]<a[maxi][maxj])
        		maxi=k;
        
        if(maxi==i)
        {
        	cout<<maxi<<" "<<maxj<<" "<<a[maxi][maxj];
        	return 0;
        }
    }
    cout<<"not found"<<endl;
    return 0;
}
