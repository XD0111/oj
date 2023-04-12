#include<bits/stdc++.h>
using namespace std;

struct stone
{
    int len, kind; 
    char ss[110];
}s[110];
 
int ki(char s[]) 
{
    int kind = 0, a[30] = {0}; 
    for(int i = 0; i < strlen(s); ++i)
        if(a[s[i] - 'a' + 1] == 0) {
            a[s[i] - 'a' + 1] = 1;
            kind++;
        }
    return kind;
}
 
bool cmp(stone x, stone y) 
{
    if(x.kind != y.kind)
        return x.kind < y.kind; 
    else if(x.len != y.len)
        return x.len > y.len; 
    else 
        return strcmp(x.ss, y.ss) < 0; 
}
 
int main()
{
    int n;
    while(cin>>n) {
        if(n == 0) break;
        for(int i = 0; i < n; ++i) {
            cin>>s[i].ss;
            s[i].kind = ki(s[i].ss);
            s[i].len = strlen(s[i].ss);
        }
        sort(s, s + n, cmp);
        for(int i = 0; i < n; ++i) {
            cout<<s[i].ss<<endl;
        }
        cout<<endl;
    }
    return 0;
}