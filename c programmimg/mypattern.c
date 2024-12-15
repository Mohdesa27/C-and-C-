#include<stdio.h>
#include<conio.h>
void main(){
int i,j,k,n,l;
    printf("enter no.");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<i;j++)
            printf(" ");
        for(k=1;k<=n;k++)
            printf("*");        
        for(l=1;l<=n-1;l++)
            printf("*");
        printf("\n");
    }
    getch();
}