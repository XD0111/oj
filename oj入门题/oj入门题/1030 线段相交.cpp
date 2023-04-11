#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int x1,y1,x2,y2,x3,y3,x4,y4;
    int a,b,c,d;
    while(cin>>x1>>y1>>x2>>y2)
        while(cin>>x3>>y3>>x4>>y4)
        {
            a = (x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1);
            b = (x2 - x1) * (y4 - y1) - (y2 - y1) * (x4 - x1);
            c = (x4 - x3) * (y1 - y3) - (y4 - y3) * (x1 - x3);
            d = (x4 - x3) * (y2 - y3) - (y4 - y3) * (x2 - x3);
 
            if(max(x1,x2) < min(x3,x4) || max(x3,x4) < min(x1,x2)
               || max(y1,y2) < min(y3,y4) || max(y3,y4) < min(y1,y2))
                cout<<"no"<<endl;
            else if(a * b <= 0 && c * d <= 0)
                cout<<"yes"<<endl;
            else
                cout<<"no"<<endl;
            break;
        }
 
    return 0;
}