#include<stdio.h>
#include<conio.h>
int main(){
  int a,b;
  int *p,*q;
  a=440;
    printf("value of a=%d\n",a);//a=440
  p=&a;
  *p=399;
    printf("value of a after pointer=%d\n",a);//a=399
  b=*p;
    printf("value of b=%d\n",b);//b=399
  q=&b;
    printf("value of *p=%d\n",*p);//*p=399
    printf("value of *q=%d\n",*q);//*q=399
    printf("value of p=%d\n",p);//value of p=6422292
    printf("value of q=%d\n",q);//value of q=6422288
      printf("address of a=%p\n",a);//address of a=0000018F
      printf("address of b=%p\n",b);//address of b=0000018F
      printf("address of q=%p\n",q);//address of q=0061FF10
      printf("address of p=%p\n",p);//address of p=0061FF14  
      printf("address of *p=%p\n",*p);//address of a:address of *p=0000018F
      printf("address of *q=%p\n",*q);//address of b:address of *q=0000018F
      return 0;
}