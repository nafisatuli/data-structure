#include <stdio.h>
#include <string.h>
void INSERT(char a[],char b[],int p)
{
    char c[1000];
	int r=0,i=0,t=0,n=0,x,g,s,o;
    for(i=0;a[i]!='\0';i++)
        r++;
	for(i=0;b[i]!='\0';i++)
        n++;
	i=0;
	while(i <= r)
	{
		c[i]=a[i];
		i++;
	}
	s = n+r;
	o = p+n;
	for(i=p;i<s;i++)
	{
		x = c[i];
		if(t<n)
		{
			a[i] = b[t];
			t=t+1;
		}
		a[o]=x;
		o=o+1;
	}
	puts(a);
}
int main()
{
	char a[1000],b[1000];
	int p;
	gets(a);
	gets(b);
	scanf("%d",&p);
	INSERT(a,b,p);
	return 0;
}
