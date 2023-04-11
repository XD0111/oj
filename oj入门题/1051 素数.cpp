#include<bits/stdc++.h>
using namespace std;

int n;

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
    while(cin>>n)
    {
        if(is_prime(n))
            puts("Yes");
        else
            puts("No");
    }
}