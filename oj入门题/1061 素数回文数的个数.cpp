#include<bits/stdc++.h>
using namespace std;

bool is_prime(int x)
{
	if(x==2)
		return true;
	for(int i=2;i<=x/i;i++)
		if(x%i==0)
			return false;
	return true;
}

bool is_repeat(int x)
{
	int y=x,z=0;
    while(y) 
	{
        z*=10;
        z+=y%10;
        y/=10;
    }
    if(z==x) 
		return true;
    else 
		return false;

}

int main()
{
 	int l,r;
 	cin>>l>>r;
 	int ant=0;
 	for(int i=l;i<=r;i++)
 	{
 		if(is_prime(i)&&is_repeat(i))
 			ant++;
	}
	cout<<ant;
 	return 0;
}
