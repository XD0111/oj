#include<bits/stdc++.h>
using namespace std;

bool func(string s,string target)
{
	int n=s.size(),m=target.size();
	int j=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]==target[j])
			j++;
	}
	if(j==m)
		return true;
	else
		return false;
}

int main()
{
 	int res=0;
	for(int i=12345678;i<=98765432;i++)
	{
		string s=to_string(i); 
		if(!func(s,"2023"))
			res++;
	}
	cout<<res;
 	return 0;
}
