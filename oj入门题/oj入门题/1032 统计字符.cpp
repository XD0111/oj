#include<bits/stdc++.h>
using namespace std;

int main()
{
 	string a;
 	int letter=0,space=0,digit=0;
 	getline(cin,a);
 	for(int i=0;i<a.length();i++)
 	{
	 	if(a[i]>='0'&&a[i]<='9')
	 		digit++;
	 	else if(a[i]==' ')
	 		space++;
	 	else if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
	 		letter++;
	} 
	printf("letter=%d\n",letter);
	printf("space=%d\n",space);
	printf("digit=%d",digit);
 	return 0;
}
