#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a;
    int b[26]={0};
    while(scanf("%c",&a)!=EOF)
	{
        if(a>=65&&a<=90);
        int k=a-65;
        b[k]++;
    }
    int max=0;
    int i=0;
    for(i=0;i<26;i++)
	{
        if(b[i]>max)
		{
            max=b[i];
        }
    }
    int h=max+1;
    char p[h][26]={' '};
    int x;
    int y;
    for(y=0;y<26;y++)
	{
        for(x=h-1;x>=0;x--)
		{
        	
            if(x==h-1)
			{
                int r=y+65;
                p[x][y]=r;
                continue;
            }
 
            if(b[y]>0)
			{
                p[x][y]='*';
                b[y]--;
            }
            else{
                p[x][y]=' ';
            }
        }
    }
    int ii;
    int jj;
    for(ii=0;ii<h;ii++)
	{
        for(jj=0;jj<26;jj++)
		{
            if(jj==0)
                printf("%c",p[ii][jj]);
            else
                printf(" %c",p[ii][jj]);
        }
        printf("\n");
    }
    return 0;
}