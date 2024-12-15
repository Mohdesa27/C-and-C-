#include<stdio.h>
#include<conio.h>
int main(){
     int a,b,c;
     float x,y,z,d;
     scanf("%d\n%d",&a,&b);
     c=a%b;//5%6=5,  6%4=2
     d=a%b;//5%6=5.000000 6%4=2.000000
     printf("%d\n",c);
     printf("%f",d);
    //  scanf("%f\n%f",&x,&y);
    //  c=x%y;//ERROR
    //  z=x%y;//ERROR
    //  printf("%d\n",c);
    //  printf("%f\n",z);
     return 0;
}