#include<stdio.h>
#include<conio.h>
int main(){
     int a,b,q,r;
     printf("enter two no");
     scanf("%d\n%d",&a,&b);
      q=a/b;
      r=a-q*b;
      printf("%d",r);
     
     return 0;
}