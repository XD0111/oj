#include<bits/stdc++.h>
using namespace std;

int main()
{
 	string a;
 	while(cin>>a)
 	{
 		for(int i=0;i<a.length();i++)
 		{
 			if(a[i]>='a'&&a[i]<='z')
 			{
 				a[i]=(a[i]-'a'+4)%26+97;
			}
			if(a[i]>='A'&&a[i]<='Z')
			{
				a[i]=(a[i]-'A'+4)%26+65;
			}
 			cout<<a[i];
		}
		puts("");
	}
 	return 0;
}
