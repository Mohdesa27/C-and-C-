#include<stdio.h>
#include<conio.h>
int main(){
     int x=3;
     x++;//4
     printf("%d\n",x);
     x--;//3
     printf("%d\n",x);
     --x;//2
     printf("%d\n",x);
     ++x;//3
     printf("%d\n",x);
     printf("%d\n",++x);//4
     printf("%d\n",x++);//print 4 then x+1=5
     x=++x + --x + ++x + x--;//22=6+5+6+5
     printf("%d",x);

     return 0;
}