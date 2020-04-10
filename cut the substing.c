#include<stdio.h>
void substring(char ch[],int a,int b)
{
    int x;
    x=a-1;
    while(a-1<b+x)
    {
       printf("%c",ch[a-1]);
        a++;
    }
}
int main()
{
     char ch[10000];
    gets(ch);
    int a,b,x;
    scanf("%d %d",&a,&b);
    substring(ch,a,b);
}
