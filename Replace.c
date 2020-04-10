#include<stdio.h>
#include<string.h>
void Replace(char aa[],char bb[],char cc[])
{
    char dd[10000];
    int i,j,k,l1,l2,l3,m,count=-1;
    for(i=0; aa[i]!='\0'; i++)
        l1=i;
    for(i=0; bb[i]!='\0'; i++)
        l2=i;
    for(i=0; cc[i]!='\0'; i++)
        l3=i;
    for(i=0; aa[i]!='\0'; i++)
        dd[i]=aa[i];
    dd[i]='\0';
    if(l1>=l2)
    {
        do
        {
            for(i=0,j=0; aa[i]!='\0' && bb[j]!='\0'; i++ )
            {
                if(aa[i]==bb[j])
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
                for(k=0; cc[k]!='\0'; i++,k++)
                    aa[i]=cc[k];
                if(l2!=l3)
                {
                    for( ; dd[m]!='\0'; m++,i++)
                    {
                        aa[i]=dd[m];
                    }
                }

            }
            else
                break;
        }
        while(aa[i]!='\0');
        printf("%s",aa);
    }
}
int main()
{
    char aa[10000],bb[10000],cc[10000];
    printf("Input a string\n");
    gets(aa);
    printf("Input the string to replace\n");
    gets(bb);
    printf("Input the string to insert\n");
    gets(cc);
    Replace(aa,bb,cc);
}
