#include<bits/stdc++.h>
using namespace std;

int a[100];
void binary(long long c, int b[])
{
    int flag = 0;
    if(c < 0) {
        c = -c;
        flag = 1;
    }
    for(int i = 0; i < 32; ++i) { 
        b[i] = c % 2;
        c /= 2; 
    }
    if(flag) {
        for(int i = 0; i < 32; ++i) { 
            if(b[i] == 0) b[i] = 1;
            else if(b[i] == 1) b[i] = 0;
        }
        for(int i = 0; i < 32; ++i) { 
            if(b[i] == 0) {b[i] = 1; break;}
            else b[i] = 0;
        }
    }
}
int main()
{
    int n;
    while(cin>>n) {
        memset(a, 0, sizeof(a)); 
        int ans = 0;
        binary(n, a);
        int pro = 1;
        for(int i = 0; i < 32; ++i) { 
            if(i % 8 == 0) pro = 1; 
            if(a[i] == 1) ans += pro;
            pro *= 2;
        }
        cout<<ans<<endl;
    }
    return 0;
}
