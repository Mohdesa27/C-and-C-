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
 int main(){
     int n,f=1;
     scanf("%d",&n);
     if(n<=1)
       printf("%d",f);
     else{
     for(int i=1;i<=n;i++){
         f=f*i;
     }
     printf("%d",f);
     }
     return 0;
 }