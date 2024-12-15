#include<stdio.h>
#include<conio.h>
void main(){
int *p,*q,a,b,sum;
   printf("enter two no "); 
   scanf("%d%d",&a,&b);
   p=&a;
   q=&b;
   sum=*p+*q;
   printf("%d",sum);
   getch();
}