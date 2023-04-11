#include<bits/stdc++.h>
using namespace std;

void sort(int &a,int &b,int &c)
{
	if(a>=b)
		swap(a,b);
	if(b>=c)
		swap(b,c);
	if(a>=b)
		swap(a,b);
}

int main()
{
 	int a,b,c;
 	while(cin>>a>>b>>c)
 	{
 		sort(a,b,c);
 		printf("%d %d %d\n",a,b,c);
	}
 	return 0;
}
