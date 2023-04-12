#include<bits/stdc++.h>
using namespace std;

const int N=1010;

int main()
{
 	int n;
 	cin>>n;
 	string s[N];
 	for(int i=0;i<n;i++)
 		cin>>s[i];
 	for(int i=0;i<n;i++)
 	{
 		for(int j=0;j<10;j++)
 		{
 			if(s[i][j]>='a'&&s[i][j]<='z')
 				s[i][j]-=32;
 			else if(s[i][j]>='A'&&s[i][j]<='Z')
			 	s[i][j]+=32;	
		}
	}
	sort(s,s+n);
	for(int i=0;i<n;i++)
		cout<<s[i]<<endl;
 	return 0;
}
