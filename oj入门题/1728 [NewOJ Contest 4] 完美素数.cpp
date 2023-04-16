#include<bits/stdc++.h>
using namespace std;

bool is_prime(int n)
{
	if(n<2)
		return false;
	for(int i=2;i<=n/i;i++)
		if(n%i==0)
			return false;
	return true;
}

int reverse(int n)
{
	int sum=0,a;
	while(n)
	{
		a=n%10;
		sum+=a;
		n/=10;
	}
	return sum;
}

int main()
{
 	int ant=0;
 	for(int i=2022;i<=20220206;i++)
 	{
 		if(is_prime(i)&&is_prime(reverse(i)))
 			ant++;
	}
 	cout<<ant;
 	return 0;
}
