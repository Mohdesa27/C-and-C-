#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 int factorial(int);
 int main(){
     int n,result;
     scanf("%d",&n);
     result=factorial(n);
     printf("%d",result);
     return 0;
 }
 int factorial(int n){
     if (n==0)
     return 1;
     else if (n==1)
     return 1;
     else {
      return (n*factorial(n-1));
     }
     
     
 }