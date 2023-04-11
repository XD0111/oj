#include<bits/stdc++.h>
using namespace std;

int main()
{
   	int n,i;
	while(cin>>n)
	{
        i=0;
   		while(n)
		{
    	i=i+n/5;
    	n=n/5;
   		}
   		printf("%d\n",i);
  	}
 	return 0;
}
