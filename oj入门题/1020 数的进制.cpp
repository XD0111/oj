#include <iostream>
using namespace std;
int a[1000];
char b[1000];
void jzeight(int m)
{
    int i=0;
    if(m<0)
    {
        m=-m;
    }
    while(m)
        {
            a[i]=m%8;
            m=m/8;
            i++;
        }
 
    for(int j=i-1;j>=0;j--)
    {
        cout <<a[j];
    }
}
void jzsixteen(int n)
{
    int i=0;
    if(n<0)
    {
        n=-n;
    }
    while(n)
    {
        b[i]=n%16;
        n=n/16;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        if(b[j]>=10&&b[j]<16)
        {
            b[j]=b[j]-10+'a';
        }
        else
        {
            b[j]=b[j]+'0';
        }
        cout<<b[j];
    }
}
 
int main()
{
    int n;
    while (cin>>n)
    {
           if(n>=0)
           { cout <<n<<" = ";
             jzeight(n);
             cout<<"(8)"<<" = ";
             jzsixteen(n);
             cout<<"(16)"<<endl;
 
           }
           else
           {
             cout <<n<<" = -";
             jzeight(n);
             cout<<"(8)"<<" = -";
             jzsixteen(n);
             cout<<"(16)"<<endl;
           }

 
    }
    return 0;
 
}