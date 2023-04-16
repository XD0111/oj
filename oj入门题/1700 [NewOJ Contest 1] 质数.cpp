#include<bits/stdc++.h>
using namespace std;

bool is_prime(int n)
{
    if(n<2)  return false;
    for(int i=2;i<=n/i;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}

int main()
{
 	int n=20222022;
	while(!is_prime(n))
	{
		n++;
	}	
	cout<<n<<endl;		
 	return 0;
 	
}
