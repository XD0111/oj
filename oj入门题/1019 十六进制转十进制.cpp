#include<bits/stdc++.h>
using namespace std;

int main()
{

	string s;
	while(cin>>s)
	{
		int n = s.length();
		long long num=0;
		for(int i = 0; i < n; i++)
		{
			if(s[i]>='0'&&s[i]<='9')
				num += (s[i]-'0');
			else if(s[i]>='a'&&s[i]<='f')
				num += (s[i]-'a'+10);
			else if(s[i]>='A'&&s[i]<='F')
				num += (s[i]-'A'+10);
			if(i<n-1)
				num *= 16;
		}
		cout<<num<<endl;
	}
 	return 0;  
}
