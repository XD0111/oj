#include<bits/stdc++.h>
using namespace std;

int main()
{
 	int a,b,c;
 	cin>>a>>b>>c;
 	if(a==b&&b==c&&a==c)
 		cout<<"YES"<<endl;
 	else
 		cout<<"NO"<<endl;
 	if(a+b>c&&a+c>b&&b+c>a)
 	{
 		if(a==b||b==c||a==c)
 			puts("YES");
 		else
 			puts("NO");
	}
 	else
 		cout<<"NO"<<endl;
 	if(a+b>c&&a+c>b&&b+c>a)
 		cout<<"YES"<<endl;
 	else
 		cout<<"NO"<<endl;
 	return 0;
}
