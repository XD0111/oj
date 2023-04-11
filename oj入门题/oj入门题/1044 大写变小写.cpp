#include<bits/stdc++.h>
using namespace std;

int main()
{
 	char a;
 	while(cin>>a)
 	{
		while(isupper(a))
			a=tolower(a);
		int b=a;
		if(b<=122&&b>=97)
			cout<<a;
	}
	return 0;
}

