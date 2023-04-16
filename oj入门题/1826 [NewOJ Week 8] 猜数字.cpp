#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        long long n, m;
        cin >> n >> m;
        long long p = ((n + 1) / 2) * (m / 2) + ((m + 1) / 2) * (n / 2);
        long long q = n * m;
        long long g = __gcd(p, q);
        cout<<p/g<<"/"<<q/g<<endl;
    }
    return 0;
}