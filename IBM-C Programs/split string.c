#include<stdio.h>
#include<string.h>
int main(){
    char text[100]={0};
    char split[5][20]={0};
    int i,j,k;
     
    printf("Enter text: ");
    scanf("%[^\n]s",text);
    j=0;k=0;
    for(i=0;i<strlen(text);i++){
         
        if(text[i]==' '){
            if(text[i+1]!=' '){
                split[k][j]='\0';
                j=0;
                k++;
            }
            continue;
        }
        else{
        
            split[k][j++]=text[i];
        }       
    }
    split[k][j]='\0';
    for(i=0;i<=k;i++){
        printf("%s\n",split[i]);
    }
     
    return 0;   
}
