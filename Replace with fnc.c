#include<stdio.h>
#include<string.h>
void REPLACE(char a[],char b[],char c[])
{
    char d[10000];
    int i,j,k,l1,l2,l3,m,count=-1;
    for(i=0;a[i]!='\0';i++)
        l1=i;
    for(i=0;b[i]!='\0';i++)
        l2=i;
    for(i=0;c[i]!='\0';i++)
        l3=i;
    for(i=0;a[i]!='\0';i++)
         d[i]=a[i];
    d[i]='\0';
    if(l1>=l2)
    {
        do
        {
            for(i=0,j=0;a[i]!='\0' && b[j]!='\0';i++ )
            {
                if(a[i]==b[j])
                {
                    count++;
                    j++;
                }
                else
                {
                    count=-1;
                    if(j>0)
                        i--;
                    j=0;
                }
            }
            m=i;
            if(count==l2)
            {
                i=i-j;
                for(k=0;c[k]!='\0';i++,k++)
                    a[i]=c[k];
                if(l2!=l3)
                {
                    for( ;d[m]!='\0';m++,i++)
                    {
                        a[i]=d[m];
                    }
                }

            }
            else
                break;
        }while(a[i]!='\0');
        printf("%s",a);
    }
}
int main()
{
    char a[10000],b[10000],c[10000];

    gets(a);
    gets(b);
    gets(c);
    REPLACE(a,b,c);
}
