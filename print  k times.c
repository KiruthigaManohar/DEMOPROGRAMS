#include<stdio.h>
#include<string.h>
void main()
{
    char word[20];
    int k,i;
    printf("Enter the word");
    scanf("%s",word);
    printf("Enter the number of times to print");
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        printf("%s",word);
    }
}
