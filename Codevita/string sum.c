#include<stdio.h>
#include<stdlib.h>
int main()
{
    char s[100];
    int i,c,count=0,r,sum=0,j,d,num=0;
    scanf("%[^\t]s",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==',')
        {
            count++;
            if(count%2==1)
            {
                c=0;
                for(j=i+1;s[j]!=',';j++)
                {
                    c++;
                }
                j=j-c;
                char *a=s+j;
                r=atoi(a);
                sum=sum+r;
            }
        }
    }
    printf("%d\n",sum);
}
