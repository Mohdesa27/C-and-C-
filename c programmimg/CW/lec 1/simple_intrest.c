#include<stdio.h>
#include<conio.h>
int main(){
    float p,r,t;
     float si;
     printf("enter principal,rate,time");
     scanf("%f%f%f",&p,&r,&t);
     si=(p*r*t)/100;
     printf("simple intrest is :%f",si);
     return 0;
}