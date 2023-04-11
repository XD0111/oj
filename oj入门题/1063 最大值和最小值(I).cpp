#include<bits/stdc++.h>
using namespace std;

int main()
{
 	int t;
 	cin>>t;
 	int a[t];
 	for(int i=0;i<t;i++)
 		cin>>a[i];
 	int min=10010,max=0,idx1=0,idx2=0;
 	for(int i=0;i<t;i++)
 	{
 		if(a[i]<min)
 		{
 			min=a[i];
 			idx1=i;
		}
		if(a[i]>max)
		{
			max=a[i];
			idx2=i;
		}
	}
	if(t==1)
		puts("0");
	else
		cout<<abs(idx1-idx2)-1<<endl;
 	return 0;
}
