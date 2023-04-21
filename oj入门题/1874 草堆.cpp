#include<bits/stdc++.h>
using namespace std;

const int N=1e4+10;

int main()
{
 	int n;
 	cin>>n;
 	int a[n],sum=0;
 	for(int i=0;i<n;i++)
 	{
 		cin>>a[i];
 		sum+=a[i];
 	}
 	int ave=sum/n,ant=0;
 	for(int i=0;i<n;i++)
 	{
 		if(a[i]>=ave)
 			ant+=a[i]-ave;	
	}
	cout<<ant;
 	return 0;
}
