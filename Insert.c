#include <stdio.h>
#include <string.h>
void insert(char aa[],char bb[],int p)
{
    char cc[1000];
	int j=0,i=0,t=0,n=0,x,g,s,m;
    for(i=0;aa[i]!='\0';i++)
        j++;
	for(i=0;bb[i]!='\0';i++)
        n++;
	i=0;
	while(i <= j)
	{
		cc[i]=aa[i];
		i++;
	}
	s = n+j;
	m = p+n;
	for(i=p;i<s;i++)
	{
		x = cc[i];
		if(t<n)
		{
			aa[i] = bb[t];
			t=t+1;
		}
		aa[m]=x;
		m=m+1;
	}
	puts(aa);
}
int main()
{
	char aa[1000],bb[1000];
	int p;
	printf("Input a string\n");
	gets(aa);
	printf("Insert a substring\n");
	gets(bb);
	printf("Input a position\n");
	scanf("%d",&p);
	insert(aa,bb,p);
	return 0;
}
