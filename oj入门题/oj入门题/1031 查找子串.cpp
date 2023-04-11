#include<bits/stdc++.h>
using namespace std;

int main()
{
 	string s,p;
 	cin>>s>>p;
 	int n,m;
	m=s.length();
	n=p.length();
	int i=1,j=0;
	int a=0,b=0;
    while(a<m&&b<n)
    {
        if(s[a]==p[b])
			a++,b++;
        else
			a=i++,b=0;
		
		if(b==n)
		{
			cout<<i-1;
			j=1;
			return 0;
		}
		
	}
	
	if(a>=m&&j==0)
		cout<<"-1";
	return 0;
}

