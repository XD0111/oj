#include<bits/stdc++.h>
using namespace std;

void func(int n,char a,char b,char c)
{
	if(n==1)
		printf("%c->%c\n",a,c);
	else
	{
		func(n-1,a,c,b);
		printf("%c->%c\n",a,c);
		func(n-1,b,a,c);
	}
}

int main()
{
 	int n,ans=1;
 	cin>>n;
 	for(int i=2;i<=n;i++)
 		ans=ans*2+1;
 	cout<<ans<<endl;
 	func(n,'a','b','c');
 	return 0;
}
