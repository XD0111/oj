#include<bits/stdc++.h>
using namespace std;

int func(int n)
{
	int ant=0;
	while(n!=1)
	{
		if(n%2)
		{
			n=n*3+1;
			ant++;
		}
		else
		{
			n/=2;
			ant++;
		}
	}	
	return ant;
}

int main()
{
	int sum=0;
 	for(int i=1;i<=12345;i++)
 		sum=max(sum,func(i));
 	cout<<sum;
 	return 0;
}
