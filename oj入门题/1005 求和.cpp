#include<bits/stdc++.h>
using namespace std;

int main()
{
 	int n,sum=0;
 	char c;
 	while(cin>>n)
 	{
 		c=getchar();
 		sum+=n;
 		if(c=='\n')
 			break;
	}
	cout<<sum<<endl;
 	return 0;
}
