#include<stdio.h>
#include<conio.h>
void tower(int n,char A,char B,char C);
void main(){
 int n;
  printf("\n enter the value");
  scanf("%d",&n);
  tower(n,'A','B','C');
  getch();
}
 void tower(int n,char A,char B,char C){
     if(n==1)
     printf("\n shift top 1 disk from tower %c to tower %C ",A,C);
    else
    {
       tower(n-1,A,C,B) ;
        tower(1,A,B,C);
        tower(n-1,B,A,C);
    }
 }