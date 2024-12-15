#include<stdio.h>
#include<conio.h>
int add(int x,int y);
    void main(){ 
      int sum,x,y;
      printf("enter two no");
      scanf("%d%d",&x,&y);
      sum = add(x,y);
      printf("sum=%d",sum);
      getch();
    }
    int add(int a,int b)
    { 
        return(a+b);
            }