#include<bits/stdc++.h>
using namespace std;

#define inf 0x3f3f3f3f

void func(int &a,int &b,int &c)
{
	if(a>b)
		swap(a,b);
	if(b>c)
		swap(b,c);
	if(a>b)
		swap(a,b);
}

int main()
{
 	int n;
 	cin>>n;
 	int min=inf,k=1,idx;
 	while(n--)
 	{
 		int a,b,c;
		cin>>a>>b>>c;
		func(a,b,c);
		if((c-a)<min)
		{
			min=c-a;
			idx=k;
		}
		k++;
	}
	cout<<idx<<endl;
 	return 0;
}
