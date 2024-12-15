#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,n;
    scanf("%d",&n);
     char str[n];  
      gets(str);
      for(i=0;i<=n-1;i++){
      if(i%2==0)
         puts(str[i])
        }
      for(i=0;i<=n-1;i++){
      if(i%2!=0)
         puts(str[i])
        }
         
      
    return 0;
}
